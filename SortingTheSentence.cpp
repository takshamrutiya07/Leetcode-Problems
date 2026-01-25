#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    string sortSentence(string s) {
        int n=s.length();
        int per=0;
        vector<string>v(10);
        for(int i=0;i<n;i++)
        {
            if(s[i]==' ')
            {
                int num=s[i-1]-'0';
                string sub=s.substr(per,i-per-1);
                v[num]=sub+' ';
                per=i+1;
            }
        }
        int num = s[n-1]-'0';
        v[num] = s.substr(per,n-per-1)+' ';
        string ans="";
        for(int i=1;i<v.size();i++)
        {
            ans += v[i];
        }
        return ans.substr(0,ans.length()-1);
    }
};
int main() {
    Solution s;
    string str="is2 sentence4 This1 a3";
    cout<<s.sortSentence(str);
    return 0;
}
