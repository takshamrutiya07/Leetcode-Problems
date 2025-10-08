#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    // string freqNum(string s) {
    //     string temp="";
    //     string t="";
    //     char ch;
    //     int len=s.length();
    //     int n;
    //     for(int i=0;i<len;i++)
    //     {
    //         if(s[i]>=97 && s[i]<=105)
    //         {
    //             ch = s[i]-48;
    //             temp += ch;
    //         }else{
    //             n=s[i]-96;
    //             t=to_string(n);
    //             t += "#";
    //             temp += t;
    //         }
    //     }
    //     return temp;
    // }
    string freqAlphabets(string s) {
        string result = "";
        int i = 0;
        int n = s.length(); 
        while (i < n) {
            if (i+2<n && s[i+2]=='#') {
                int num = (s[i]-'0')*10 + (s[i+1]-'0');
                result += ('a'+num-1);
                i += 3;
            } else {
                int num = s[i]-'0';
                result += ('a'+num-1);
                i++;
            }
        }
        return result;
    }
};
int main() {
    Solution s;
    // cout<<s.freqAlphabets("jkab");
    cout<<s.freqAlphabets("10#11#12");
    return 0;
}
