#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int>ans;
        unordered_map<int ,int>mp;
        for(auto i:nums)
        {
            mp[i]++;
        } 
        vector<pair<int,int>>v;
        for(auto j : mp)
        {
            v.push_back({j.first, j.second});
        }
        sort(v.begin(),v.end(),[](auto a, auto b)
        {
            return a.second > b.second;
        });
        for(int i=0;i<k;i++)
        {
            ans.push_back(v[i].first);
        }
        return ans;
    }
};

int main() {
    Solution s;
    vector<int>v={1,1,1,2,2,3};
    vector<int>ans;
    int k = 2;
    ans = s.topKFrequent(v,k);
    for(auto i:ans)
    {
        cout<<i<<" ";
    }
    return 0;
}
