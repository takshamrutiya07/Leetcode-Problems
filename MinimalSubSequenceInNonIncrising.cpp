#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> minSubsequence(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        reverse(nums.begin(),nums.end());
        int sum=0;
        for(auto i:nums)
        {
            sum += i;
        }
        int n=0;
        vector<int>ans;
        for(auto i:nums)
        {
           n += i;
           ans.push_back(i);
           if(n>sum-n) break;
        }
        return ans;
    }
};
int main() {
    Solution s;
    vector<int>v={4,3,10,9,8};
    vector<int>ans;
    ans=s.minSubsequence(v);
    for(auto i:ans)
    {
        cout<<i<<" ";
    }
    return 0;
}
