#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
     int climbStairs(int n) {
        int n1=1;
        int n2=2;
        int sum=0;
        if(n==1)
          return 1;
        if(n==2)
          return 2;
        for(int i=3;i<=n;i++)
        {
            sum = (n1+n2);
            n1=n2;
            n2=sum;
        }
        return sum;
    }
};
int main() {
    Solution s;
    int n;
    cin>>n;
    cout<<s.climbStairs(n);
    return 0;
}
