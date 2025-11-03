#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int reverse(int num)
    {
        int temp=num;
        int n=0;
        while(temp>0)
        {
           n=n*10+temp%10;
           temp /=10; 
        }
        return n;
    }
    bool isSameAfterReversals(int num){
        int n=reverse(num);
        int rev=reverse(n);
        if(num==rev) return 1;
        return 0;
    }
};
int main() {
    Solution s;
    int n=1234;
    cout<<s.isSameAfterReversals(n);
    return 0;
}
