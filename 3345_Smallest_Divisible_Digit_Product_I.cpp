#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int smallestNumber(int n, int t) {
        while(true)
        {
            int multi = 1;
            int num = n;
            while(num>0)
            {
                multi *= num%10;
                num /= 10;
            }
            if(multi%t==0)
            return n;
            n++;
        }
        return 0;
    }
};

int main() {
    Solution s;
    int n = 10;
    int t = 2;
    cout<<s.smallestNumber(n,t);
    return 0;
}
