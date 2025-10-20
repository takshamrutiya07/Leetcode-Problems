#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int reverse(int x) {
        bool flag=false;
        long num=0;
        if(x==INT_MIN)
        return 0;
        if(x<0) 
        {
            flag = true;
            x *= (-1);
        }
        while(x>0)
        {
            num = num*10 + x%10;
            if(num<INT_MIN || num>INT_MAX)
            return 0;
            x /= 10;
        }
        if(flag) return num *= -1;
        return num;
    }
};
int main() {
    Solution s;
    cout<<s.reverse(INT_MIN)<<"\n";
    return 0;
}
