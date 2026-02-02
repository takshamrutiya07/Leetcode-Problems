#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    string defangIPaddr(string address) {
        string s="";
        for(int i=0;i<address.length();i++)
        {
            if(address[i]!='.')
            s += address[i];
            else
            s += "[.]";
        }
        return s;
    }
};
int main() {
    Solution s;
    string str="1.1.1.1";
    cout<<s.defangIPaddr(str);
    return 0;
}
