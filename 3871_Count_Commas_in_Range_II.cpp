#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    long long countCommas(long long n) {
        long long sum = 0;

        if (n >= 1000)
            sum += n - 999;

        if (n >= 1000000)
            sum += n - 999999;

        if (n >= 1000000000)
            sum += n - 999999999;

        if (n >= 1000000000000LL)
            sum += n - 999999999999LL;
        
        if (n >= 1000000000000000LL)
        {
            sum += n - 999999999999999LL;
        }

        return sum;
    }
};

int main() {
    Solution s;
    long long num = 1004590;
    cout<<s.countCommas(num);
    return 0;
}
