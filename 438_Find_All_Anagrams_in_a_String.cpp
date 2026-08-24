#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        int len1 = s.length();
        int len2 = p.length();
        vector<int>ans;
        if(len1<len2)return {};
        unordered_map<int,int>mp1;
        unordered_map<int,int>mp2;
        for(int i=0;i<len2;i++)
        {
            mp1[p[i]-'a']++;
            mp2[s[i]-'a']++;
        }
        if(mp1 == mp2)
        ans.push_back(0);
        for(int i=len2;i<len1;i++)
        {
            int firstchar = s[i-len2]-'a';
            mp2[firstchar]--;

            if(mp2[firstchar]==0)
            mp2.erase(firstchar);

            mp2[s[i]-'a']++;
            if(mp2 == mp1)
            ans.push_back(i-len2+1);
        }
        return ans;   
    }
};

int main() {
    Solution s;
    string str = "cbaebabacd";
    string str1 = "abc";
    vector<int>ans;
    ans = s.findAnagrams(str,str1);
    for(auto i:ans)
    {
        cout<<i<<" ";
    }
    return 0;
}
