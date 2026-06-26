#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool validDigit(int n, int x) {
        string str1 = to_string(n);
        string str2 = to_string(x);
        if(str1[0]==str2[0])
        {
            return false;
        }
        for (int i = 1; i < str1.length(); i++)
        {
            if(str1[i]==str2[0])
            {
                return true;
            }
        }
        return false;
    }
};
int main() {
    Solution s;
    int n1=101;
    int n2=0;
    cout<<s.validDigit(n1,n2);
    return 0;
}
