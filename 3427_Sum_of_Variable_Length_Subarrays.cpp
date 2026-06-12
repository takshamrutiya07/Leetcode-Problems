#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int subarraySum(vector<int>& nums) {
        int n=nums.size();
        vector<int>prefix(n,0);
        prefix[0]=nums[0];
        for(int i=1;i<n;i++)
        {
            prefix[i]=prefix[i-1]+nums[i];
        }
        int sum=0;
        for(int i=0;i<n;i++)
        {
            int start=max(0,i-nums[i]);
            if(start==0)
            {
                sum += prefix[i];
                // cout<<start<<":"<<i<<" = "<<sum<<endl;
            }else
            {
                sum += prefix[i]-prefix[start-1];
                // cout<<start<<":"<<i<<" = "<<sum<<endl;
            }   
        }
        return sum;
    }
};

int main() {
    Solution s;
    vector<int>v={2,3,1};
    cout<<s.subarraySum(v);
    return 0;
}
