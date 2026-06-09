#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    long long maxTotalValue(vector<int>& nums, int k) {
        long long mini=nums[0];
        long long maxi=nums[0];
        for(auto i:nums)
        {
            if(i<mini)
            mini=i;
            if(i>maxi)
            maxi=i;
        }
        return (maxi-mini)*k;
    }
};
int main() {
    Solution s;
    vector<int>v={1,3,2};
    cout<<s.maxTotalValue(v,2);
    return 0;
}
