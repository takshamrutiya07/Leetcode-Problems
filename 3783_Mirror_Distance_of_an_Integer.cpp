#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
     int mirrorDistance(int n) {
        int temp=n;
        int num=0;
        while(n>0)
        {
            num = num*10 + n%10;
            n /= 10;
        }
        return abs(temp-num);
    }
};

int main() {
    Solution s;
    int n=25;
    cout<<s.mirrorDistance(n);
    return 0;
}
