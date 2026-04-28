#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minPartitions(string n) {
    int maxDigit = 0;
    for(char c : n) {
        maxDigit = max(maxDigit, c - '0');
    }
    return maxDigit;
    }
};
int main() {
    Solution s;
    string str="278";
    cout<<s.minPartitions(str);
    return 0;
}
