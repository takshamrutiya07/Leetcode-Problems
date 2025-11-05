#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
     vector<int> sortArrayByParity(vector<int>& nums) {
        int size=nums.size();
        int j=0;
        for(int i=0;i<size;i++)
        {
            if(nums[i]%2==0)
            {
                swap(nums[j],nums[i]);
                j++;
            }
        }
        return nums;
    }
};
int main() {
    Solution s;
    vector<int>v={2,4,3,1,6,7};
    vector<int>ans=s.sortArrayByParity(v);
    for(auto i : ans)
    {
        cout<<i<<" ";
    }
    return 0;
}
