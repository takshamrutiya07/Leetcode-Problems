#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int findGCD(vector<int>& nums) {
        int n=nums.size();
        int mini=nums[0];
        int maxi=nums[1];
        int factor=1;
        for(int i=0;i<n;i++)
        {
            if(nums[i]>maxi)
            maxi=nums[i];
            if(nums[i]<mini)
            mini=nums[i];
        }
        for(int i=2;i<=maxi;i++)
        {
            if(maxi%i==0 && mini%i==0)
            factor=i;
            
        }
        return factor;
    }
};
int main() {
    Solution s;
    vector<int>v={8,5,8,7,4};
    cout<<s.findGCD(v);
    return 0;
}
