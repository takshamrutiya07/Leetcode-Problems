#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int vowelConsonantScore(string s) {
        int n=s.length();
        int v=0;
        int c=0;
        for(int i=0;i<n;i++)
        {
            if(s[i]>=97 && s[i]<=122)
            {
                if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u')
                v++;
                else
                c++;
            }
        }
        if(c>0) return floor(v/c);
        return 0;
    }
};
int main() {
    Solution s;
    string str="cooear";
    cout<<s.vowelConsonantScore(str);
    return 0;
}
