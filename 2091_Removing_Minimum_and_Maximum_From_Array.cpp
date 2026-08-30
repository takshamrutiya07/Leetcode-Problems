#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int mini = nums[0];
        int maxi = nums[0];
        int minidx = 0;
        int maxidx = 0;
        int n = nums.size();
        for(int i=1;i<n;i++)
        {
            if(nums[i]>maxi)
            {
                maxi = nums[i];
                maxidx = i;
            }else if(nums[i]<mini)
            {
                mini = nums[i];
                minidx = i;
            }
        }
        int left = min(minidx,maxidx);
        int right = max(minidx,maxidx);

        //if we are removing from left
        int ans1 = right+1;
        //if we are removing from right
        int ans2 = n-left;
        //if we are removing from left and right
        int ans3 = left+1 + n-right;

        return min({ans1,ans2,ans3});
    }
};

int main() {
    Solution s;
    vector<int>nums={-14,61,29,-18,59,13,-67,-16,55,-57,7,74};
    cout<<s.minimumDeletions(nums);
    return 0;
}
