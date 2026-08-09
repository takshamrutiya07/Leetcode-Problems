#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void merge(vector<int> &a, int low, int mid, int high)
{
    int ls = mid - low + 1;
    int rs = high - mid;
    int la[ls];
    int ra[rs];
    // copy elements in left array from actual array
    for (int index = 0, i = low; i <= mid; index++, i++)
    {
        la[index] = a[i];
    }
    // copy elements in right array from actual array
    for (int index = 0, i = mid + 1; i <= high; index++, i++)
    {
        ra[index] = a[i];
    }
    // merge logic
    int i = 0;
    int j = 0;
    int k = low;
    while (i < ls && j < rs)
    {
        if (la[i] < ra[j])
        {
            a[k] = la[i];
            i++;
        }
        else
        {
            a[k] = ra[j];
            j++;
        }
        k++;
    }
    // copy left array if right array is empty
    while (i < ls)
    {
        a[k] = la[i];
        i++;
        k++;
    }
    // copy right array if left array is empty
    while (j < rs)
    {
        a[k] = ra[j];
        k++;
        j++;
    }
}


    void merge_sort(vector<int>& a, int low, int high)
    {
    if (low == high)
        return;
    int mid = low + (high - low) / 2;
    // left side
    merge_sort(a, low, mid);
    // right side
    merge_sort(a, mid + 1, high);
    // merge the left and right part
    merge(a, low, mid, high);
    }
    vector<int> sortArray(vector<int>& nums) {
        merge_sort(nums,0,nums.size()-1);
        return nums;
    }
};

int main() {
    Solution s;
    vector<int>nums={5,3,4,2,1,5};
    vector<int>ans;
    ans = s.sortArray(nums);
    for(auto i:ans)
    {
        cout<<i<<" ";
    }
    return 0;
}
