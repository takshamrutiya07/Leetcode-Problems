#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    string clearDigits(string s) {
    string str = "";
    for (char c : s) {
        if (isdigit(c)) {
            if (!str.empty()) {
                str.pop_back();
            }
        } else {
            str.push_back(c);
        }
    }
    return str;
    }
};
int main() {
    Solution s;
    string str="ac34";
    cout<<s.clearDigits(str);
    return 0;
}
