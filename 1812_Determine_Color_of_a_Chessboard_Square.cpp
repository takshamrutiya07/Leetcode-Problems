#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool squareIsWhite(string coordinates) {
        int n = coordinates[0]-'a'+1;
        int n1 = coordinates[1]-'0';
        return (n+n1) % 2==1;
    }
};
int main() {
    Solution s;
    string str="b2";
    cout<<s.squareIsWhite(str);
    return 0;
}
