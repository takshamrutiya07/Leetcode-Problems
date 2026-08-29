#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<string> topKFrequent(vector<string>& words, int k) {
        unordered_map<string,int>mp;
        vector<string>ans;
        for(auto i:words)
        {
            mp[i]++;
        }
        vector<pair<string,int>> v;
        for(auto i : mp)
        {
            v.push_back(i);
        }
        sort(v.begin(),v.end(),[](pair<string,int>a,pair<string,int>b){
            if(a.second == b.second)
            return a.first<b.first;
            return a.second>b.second;
        });
        for(auto i:v)
        {
            if(ans.size()==k)
            return ans;
            ans.push_back(i.first);
        }
        return ans;
    }
};

int main() {
    Solution s;
    vector<string>words={"i","love","leetcode","i","love","coding"};
    int k = 2;
    vector<string>ans;
    ans = s.topKFrequent(words,k);
    for(auto i:ans)
    {
        cout<<i<<" ";
    }
    return 0;
}
