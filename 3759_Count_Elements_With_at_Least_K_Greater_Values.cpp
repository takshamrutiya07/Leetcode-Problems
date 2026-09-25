#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int countElements(vector<int>& nums, int k) {
        int n = nums.size();
        sort(nums.begin(),nums.end());
        unordered_map<int,int>mp;
        for(auto i:nums)
        {
            mp[i]++;
        }
        int count = 0;
        for(int i=0;i<n;i++)
        {
            int greater = n - count - mp[nums[i]];
            if(greater < k)
            return count;
                
            count += mp[nums[i]];
            i += (mp[nums[i]]-1);
        }
        return count;
    }
};

int main() {
    Solution s;
    vector<int>nums = {3,1,2};
    int k = 1;
    cout<<s.countElements(nums,k);
    return 0;
}
