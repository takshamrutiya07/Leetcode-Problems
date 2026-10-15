#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
bool isPrime(int p)
{
    if (p<2) return false;
    if(p%2==0 || p%3==0){return false;}
    for(long i=5;i<=p/i;i+=6)
    {
        if(p%i==0 || p%(i+2)==0){
            return false;
        }
    }
    return true;
}
int countPrimes(int n) {
int count=0;
    if(n>2) 
    count=1;
    if(n>3)
    count++;
    for(int i=1;(6*i)-1<n;i++)
    {
        int a=(6*i)-1;
        int b=(6*i)+1;
        if(a<n && isPrime(a))
        count++;
        if(b<n&&isPrime(b))
        count++;
    }
    return count;
}
};
int main() {
    Solution s;
    int n=10;
    cout<<s.countPrimes(n);
    return 0;
}

