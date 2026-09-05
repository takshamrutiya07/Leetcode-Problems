#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int n = nums.size();
        vector<int>sufMin(n,0);
        sufMin[n-1] = nums[n-1];
        for(int i=n-2;i>=0;i--)
        {
            sufMin[i] = min(nums[i],sufMin[i+1]);
        }
        int preMax = INT_MIN;
        for(int i=0;i<n;i++)
        {
            preMax = max(nums[i],preMax);
            if(preMax-sufMin[i] <= k)
            return i;
        }
        return -1;
    }
};

int main() {
    Solution s;
    vector<int>nums={5,0,1,4};
    int k = 3;
    cout<<s.firstStableIndex(nums,k);
    return 0;
}
