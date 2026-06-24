#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int rearrangeCharacters(string s, string target) {
        vector<int>tar(26,0);
        vector<int>v(26,0);
        for(auto i:target)
        {
            tar[i-'a']++;
        }
        for(auto i:s)
        {
            v[i-'a']++;
        }
        int mini=INT_MAX;
        for(int i=0;i<26;i++)
        {
            if((tar[i]!=0) && (v[i]==0))
            {
                return 0;
            }else if((tar[i]!=0) && (v[i]!=0))
            {
                v[i]/=tar[i];
                mini = min(v[i],mini);
            }
        }
        return mini;
    }
};
int main() {
    Solution s;
    string str="ilovecodingonleetcode";
    string target="code";
    cout<<s.rearrangeCharacters(str,target);
    return 0;
}
