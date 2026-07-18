#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string gcdOfStrings(string str1, string str2) {
        if (str1 + str2 != str2 + str1)
            return "";

        int len = __gcd(str1.size(), str2.size());
        return str1.substr(0, len);
    }
};

int main() {
    Solution s;
    string s1="ABABAB";
    string s2="ABAB";
    cout<<s.gcdOfStrings(s1,s2);
    return 0;
}
