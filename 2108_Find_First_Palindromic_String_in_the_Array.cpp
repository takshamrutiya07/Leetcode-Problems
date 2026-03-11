#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool ispalindrome(string s)
    {
        int n=s.length();
        for(int i=0;i<=n/2;i++)
        {
            if(s[i] != s[n-i-1])
            return 0;
        }
        return 1;
    }
    string firstPalindrome(vector<string>& words) {
        for(int i=0;i<words.size();i++)
        {
            if(ispalindrome(words[i]))
            {
                return words[i];
            }
        }
        return "";
    }
};
int main() {
    Solution s;
    vector<string>v={"abc","car","ada","racecar","cool"};
    cout<<s.firstPalindrome(v);
    return 0;
}
