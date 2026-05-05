#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int theMaximumAchievableX(int num, int t) {
        return num + t*2;
    }
};

int main() {
    Solution s;
    cout<<s.theMaximumAchievableX(4,1);
    return 0;
}
