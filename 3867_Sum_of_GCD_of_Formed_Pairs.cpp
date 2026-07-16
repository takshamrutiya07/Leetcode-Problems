#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    long long gcdSum(vector<int>& nums) {
        int n=nums.size();
        vector<int>prifixGCD(n,0);
        int maxi=nums[0];
        for(int i=0;i<n;i++)
        {
            maxi=max(nums[i],maxi);
            prifixGCD[i] = __gcd(nums[i],maxi);
        }
        sort(prifixGCD.begin(),prifixGCD.end());
        long long sum=0;
        for(int i=0;i<n/2;i++)
        {
            sum += __gcd(prifixGCD[i],prifixGCD[n-1-i]);
        }
        return sum;
    }
};
int main() {
    Solution s;
    vector<int>nums={3,6,2,8};
    cout<<s.gcdSum(nums);
    return 0;
}
