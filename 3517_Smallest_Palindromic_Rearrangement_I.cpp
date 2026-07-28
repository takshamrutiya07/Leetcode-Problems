#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    string smallestPalindrome(string s) {
        // int len = s.length();
        // string str1="";
        // vector<int>v(26,0);
        // int oddchar=-1;
        // for(int i=0;i<len;i++)
        // {
        //     v[s[i]-'a']++;
        // }
        // for(int i=0;i<26;i++)
        // {
        //     if(v[i] % 2 == 1)oddchar=i;
        //     for(int j=0;j<v[i]/2;j++)
        //     {
        //         str1 += char('a'+i);
        //     }
        // }
        // string str2= str1;
        // if(oddchar != -1)
        // str2 += char('a'+oddchar);
        // reverse(str1.begin(),str1.end());
        // return str2 + str1;

        int len = s.length();
        vector<int>v(26,0);
        for(int i=0;i<len/2;i++)
        {
            v[s[i]-'a']++;
        }
        int index=0;
        for(int i=0;i<26;i++)
        {
            while(v[i]-- > 0)
            {
                s[index++] = char('a'+i);
            }
        }
        for(int i=0;i<len/2;i++)
        {
            s[len-i-1] = s[i];
        }
        return s;
    }
};
int main() {
    Solution s;
    string str = "eae";
    cout<<s.smallestPalindrome(str);
    return 0;
}
