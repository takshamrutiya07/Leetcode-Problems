#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool isPowerOfThree(int n) {
        long power=3;
        if(n==1)
        return 1;
        if(n<=0)
        return 0;
        while(power<=n)
        {
            if(power==n)
            {
                return 1;
            }
            power=power*3;
        }
        return 0;
    }
};

int main() {
    Solution s;
    cout<<s.isPowerOfThree(1);
    return 0;
}
