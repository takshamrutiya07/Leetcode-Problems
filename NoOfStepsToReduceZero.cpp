#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int numberOfSteps(int num) {
        int step=0;
        while(num>0)
        {
            if(num%2==0)
            {
                num /= 2;
                step++;
            }else{
                num -= 1;
                step++;
            }
        }
        return step;
    }
};

int main() {
    Solution s;
    int n=14;
    cout<<s.numberOfSteps(n);
    return 0;
}
