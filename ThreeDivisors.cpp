#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isThree(int n) {
        int count=1;
        for(int i=2;i<=n/2;i++)
        {
            if(n%i==0)
            count += 2;
            if(count>3)
            return 0;
        }
        if(count==3)
        return 1;
        return 0;
    }
};
int main() {
    Solution s;
    int n=4;
    cout<<s.isThree(n);
    return 0;
}
