#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> findLonely(vector<int>& nums) {
        unordered_map<int,int>mp;
        vector<int>ans;
        for(auto i:nums)
        {
            mp[i]++;
        }
        for(auto i:mp)
        {
            if(i.second == 1 && (mp.count(i.first-1)==0 && mp.count(i.first+1)==0))
            ans.push_back(i.first);
        }
        return ans;
    }
};
int main() {
    Solution s;
    vector<int>nums={10,6,5,8};
    vector<int>ans;
    ans = s.findLonely(nums);
    for(auto i:ans)
    {
        cout<<i<<" ";
    }
    return 0;
}
