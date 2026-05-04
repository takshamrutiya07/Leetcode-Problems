#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int minAllOneMultiple(int k) {
        if (k % 2 == 0 || k % 5 == 0)
            return -1;

        int remainder = 1 % k;
        int count = 1;

        while (remainder != 0) {
            remainder = (remainder * 10 + 1) % k;
            count++;
        }

        return count;
    }
};
int main() {
    Solution s;
    int k=3;
    cout<<s.minAllOneMultiple(k);
    return 0;
}
