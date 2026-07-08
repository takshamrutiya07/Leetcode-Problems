#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    long long sumAndMultiply(int n) {
       long long num = 0;
       long long sum=0;
       int k= 1;
       while(n)
       {
            int r=n%10;
            n /= 10;
            if(r)//when r is not zero then and then we have to add it in num;
            {
                num = r*k + num;
                sum += r;
                k *=10;
            }  
       } 
       return 1LL*num*sum;
    }
};
int main() {
    Solution s;
    int num = 10203004;
    cout<<s.sumAndMultiply(num);
    return 0;
}
