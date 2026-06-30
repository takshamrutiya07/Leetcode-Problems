#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int countCommas(int n) {
        if(n>=1000 && n<=100000)
        {
            return n-999;
        }
        return 0;
    }
};

int main() {
    Solution s;
    cout<<s.countCommas(1002);
    return 0;
}
