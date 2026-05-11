#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int>digits(int n)
    {
        vector<int>ans;
        while(n>0)
        {
            ans.push_back(n%10);
            n /= 10;
        }
        return ans;
    }
    vector<int> separateDigits(vector<int>& nums) {
        int n=nums.size();
        vector<int>ans;
        for(int i=0;i<n;i++)
        {
            vector<int>v=digits(nums[i]);
            for(int j=v.size()-1;j>=0;j--)
            {
                ans.push_back(v[j]);
            } 
        }
        return ans;
    }
};
int main() {
    Solution s;
    vector<int>nums={13,25,83,24};
    vector<int>v;
    v=s.separateDigits(nums);
    for(auto i:nums)
    {
        cout<<i<<" ";
    }
    return 0;
}
