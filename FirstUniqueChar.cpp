#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int firstUniqChar(string s) {
    vector<int>v(26,0);
    for(char c : s)
    {
        v[c-'a']++;
    }
    for(int i=0;i<s.size();i++)
    {
        if(v[s[i]-'a'] == 1)
        {
            return i;
        }
    }
    return -1;
    }
};
int main() {
    Solution s;
    string str="loveleetcode";
    cout<<s.firstUniqChar(str);
    return 0;
}
