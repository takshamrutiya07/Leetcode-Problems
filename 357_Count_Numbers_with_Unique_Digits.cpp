#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int countNumbersWithUniqueDigits(int n) {
        if(n==0) return 1;
        int ans=10;
        int count=9;
        for(int i=9;i>10-n;i--)
        {
            count = count*i;
            ans += count;
        }
        return ans;
    }
};

int main() {
    Solution s;
    int n=3;
    cout<<s.countNumbersWithUniqueDigits(n);
    return 0;
}
