#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    long long reverse(long long num)
    {
        long n=0;
        while(num>0)
        {
            n = n*10+num%10;
            num /= 10;
        }
        return n;
    }
    long long removeZeros(long long n) {
        long long num=0;
        while(n>0)
        {
            int r=n%10;
            if(r!=0)
            num = num*10+r;
            n /= 10;
        }
        n=reverse(num);
        return n;
    }
};
int main() {
    Solution s;
    cout<<s.removeZeros(10002033);
    return 0;
}
