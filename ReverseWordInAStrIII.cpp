#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    string rev(string str)
    {
        int n=str.size();
        char c;
        for(int i=0,j=n-1;i<n/2;i++,j--)
        {
           c=str[i];
           str[i]=str[j];
           str[j]=c;
        }
        return str;
    }
    string reverseWords(string s) {
        int find=0;
        string sub;
        string str="";
        while(true)
        {
            find=s.find(' ');
            if(find==string::npos)break;
            sub=s.substr(0,find);
            str += rev(sub);
            str += " ";
            s = s.substr(find + 1);
        }
        sub=s.substr(0,s.length());
        str += rev(sub);
        return str;
    }
};
int main() {
    Solution s;
    string str="Let's Play Chess";
    cout<<s.reverseWords(str);
    return 0;
}
