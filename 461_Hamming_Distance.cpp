#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int hammingDistance(int x, int y) {
        int n = x^y;
        int count=0;
        while(n>0)
        {
            // if(n%2)count++;
            // n /= 2;
            n = n & (n - 1);
            count++;
        }
        // int count = 0;
        // while (x != 0 || y != 0) {
        //     if ((x & 1) != (y & 1)) {
        //         count++;
        //     }
        //     x = x >> 1;
        //     y = y >> 1;
        // }
        return count;
    }
};

int main() {
    Solution s;
    int x=5,y=7;
    cout<<s.hammingDistance(x,y);

    return 0;
}
