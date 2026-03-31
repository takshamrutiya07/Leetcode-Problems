#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int minimumSumSubarray(vector<int>& nums, int l, int r) {
        int n=nums.size();
        vector<int>prefix_sum(n);
        prefix_sum[0]=nums[0];
        for(int i=1;i<n;i++)
        {
            prefix_sum[i]=prefix_sum[i-1]+nums[i];
        }

        int mini=INT_MAX;
for(int st=0; st<n; st++)
   {
    for(int len = l; len <= r; len++)
    {
        if(st + len <= n)
        {
            int end = st + len - 1;
            int sums;
            if(st==0)
            {
                sums=prefix_sum[end];
            }
            else 
            {
                sums=prefix_sum[end]-prefix_sum[st-1];
            }
            if(sums > 0){
                mini = min(mini, sums);
            }
        }
    }
}
 if(mini == INT_MAX)
            return -1;
        return mini;
    }
};
int main() {
    Solution s;
    vector<int>v={1,2,3,4};
    cout<<s.minimumSumSubarray(v,2,4);
    return 0;
}
