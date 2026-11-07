#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int numRabbits(vector<int>& answers) {
        unordered_map<int,int> mp;
        int ans = 0;
        for(auto i : answers)
        {
            mp[i]++;
        }
        for(auto i : mp)
        {
            int x = i.first;
            int count = i.second;

            int group = (count + x) / (x + 1);
            ans += group * (x + 1);
        }
        return ans;
    }
};
int main() {
    Solution s;
    vector<int>v = {1,1,2};
    cout<<s.numRabbits(v);
    return 0;
}
