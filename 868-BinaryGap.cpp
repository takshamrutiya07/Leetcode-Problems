#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int binaryGap(int n) {
        int pos=0;
        int diff=0;
        int i=0;
        bool flag = true;
        while(n>=1)
        {
            int r = n%2;
            n /= 2;
            if(r==1)
            {
                if(flag)
                {
                    pos = i;
                    flag=false;
                }
                diff = max(diff,i-pos);
                pos = i;
            }
            i++;
        }
        return diff;
    }
};
int main() {
    Solution s;
    int n=22;
    cout<<s.binaryGap(n);
    return 0;
}
