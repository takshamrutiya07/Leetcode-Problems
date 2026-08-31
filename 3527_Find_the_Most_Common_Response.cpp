#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    string findCommonResponse(vector<vector<string>>& responses) {
        unordered_map<string,int>mp;
        string ans = "";
        for(int i=0;i<responses.size();i++)
        {
            unordered_set<string>st;//it stores only unique values 
            for(auto str:responses[i])
            {
                st.insert(str);
            }
            for(auto j:st)
            {
                mp[j]++;
            }
        }
        int maxi = INT_MIN;
        for(auto i:mp)
        {
            if(i.second > maxi)
            {
                maxi = i.second;
                ans = i.first;
            }
            else if(i.second == maxi && i.first < ans)
            {
                ans = i.first;
            }
        }
        return ans;
    }
};

int main() {
    Solution s;
    vector<vector<string>>v={{"good","ok","good","ok"},{"ok","bad","good","ok","ok"},
{"good"},{"good"}};
    cout<<s.findCommonResponse(v);
    return 0;
}
