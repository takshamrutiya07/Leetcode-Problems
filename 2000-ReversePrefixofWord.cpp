#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    string reversePrefix(string word, char ch) {
        int n=word.length();
        int i=0;
        string str="";
        while((i<n) && (word[i] != ch))
        {
            str += word[i];
            i++;
        }
        if(i<n)
        {
           str += word[i];
           i++;
           reverse(str.begin(),str.end());
           string sub=word.substr(i);
           str += sub;
        }
        return str;
    }
};
int main() {
    Solution s;
    string str="abcd";
    char ch='z';
    cout<<s.reversePrefix(str,ch);
    return 0;
}
