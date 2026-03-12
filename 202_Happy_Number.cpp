#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool isHappy(int n) {
        int i=0;
        while(i<100)
        {
            int sum=0;
            while(n)
            {
                int digit=n%10;
                sum+=digit*digit;
                n/=10;
            }
            n=sum;
            if(n==1)
                return true;
            i++;
        }
        return n==1;
    }
};

int main() {
    Solution s;
    int n=19;
    cout<<s.isHappy(n);
    return 0;
}
