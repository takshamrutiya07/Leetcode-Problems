#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int missingInteger(vector<int>& nums) {
        int n = nums.size();
        int prefixsum = nums[0];
        vector<bool>isnum(51,0);
        for(auto i:nums)isnum[i]=1;
        for(int i=1;i<n;i++)
        {
            if(nums[i-1]+1 == nums[i])
            prefixsum += nums[i];
            else
            break;
        }
        if(prefixsum>50)return prefixsum;
        for(int i=prefixsum;i<52;i++)
        {
            if(!isnum[i])return i;
        }
        return 0;
    }
};

int main() {
    Solution s;
    vector<int>v={50};
    cout<<s.missingInteger(v);
    return 0;
}
