#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    void sortColors(vector<int>& nums) {
        int size=nums.size();
        int low=0;
        int mid=0;
        int high=size-1;
        while(mid<=high)
        {
            if(nums[mid]==0)
            {
                swap(nums[low],nums[mid]);
                low++;
                mid++;
            }else if(nums[mid]==1)
            {
                mid++; 
            }else{//nums[mid]==2
                swap(nums[mid],nums[high]);
                high--;
            }
        } 
        for(auto x:nums)
        {
            cout<<x<<" ";
        }
    }
};
int main() {
    Solution s;
    vector<int>nums={2,0,2,1,1,0};
    s.sortColors(nums);
    return 0;
}
