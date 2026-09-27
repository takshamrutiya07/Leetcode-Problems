#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    string evaluate(string s, vector<vector<string>>& knowledge) {
        unordered_map<string,string>mp;
        string ans = "";
        for(auto str:knowledge)
        {
            mp[str[0]]=str[1];
        }
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='(')
            {
                int idx = i+1;
                while(s[i]!=')')
                i++;
                string temp = s.substr(idx,i-idx);
                cout<<temp<<" ";
                if(mp.count(temp))
                {
                    ans += mp[temp];
                }else{
                    ans += '?';
                }
            }else
            ans += s[i];
        }
        return ans;
    }
};

int main() {
    Solution s;
    string str = "(name)is(age)yearsold";
    vector<vector<string>>knowledge={{"name","bob"},{"age","two"}};
    cout<<s.evaluate(str,knowledge);
    return 0;
}
