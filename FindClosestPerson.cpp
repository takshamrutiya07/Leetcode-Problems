#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int findClosest(int x, int y, int z) {
        return (abs(z-x)>abs(z-y))?2:1;
        return 0;
    }
};
int main() {
    Solution s;
    cout<<s.findClosest(2,4,6);
    return 0;
}
