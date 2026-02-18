#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool hasAlternatingBits(int n) {
        int pre=2;
        while(n>0)
        {
            int curr=n%2;
            n /= 2;
            if(pre==curr)
            return 0;
            pre=curr;
        }
        return 1;
    }
};
int main() {
    Solution s;
    int n=5;
    cout<<s.hasAlternatingBits(n);
    return 0;
}
