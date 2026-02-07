#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string replaceDigits(string s) {
    int n = s.length();
    string str = "";
    for(int i = 0; i < n; i += 2)
    {
        str += s[i];
        if(i + 1 < n) 
        {
            int num = s[i+1] - '0';
            char ch = s[i] + num;
            str += ch;
        }
    }
    return str;
}
};
int main() {
    Solution s;
    string str="a1b2c3d4e";
    cout<<s.replaceDigits(str);
    return 0;
}
