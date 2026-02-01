#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string generateTheString(int n) {
        string str="";
        char ch = 't';
        if(n%2 ==0)
        {
            str += 'a';
        }
        while(str.length()<n)
        {
           str += ch;
        }
        return str;
    }
};
int main() {
    Solution s;
    int n=4;
    cout<<s.generateTheString(n);
    return 0;
}
