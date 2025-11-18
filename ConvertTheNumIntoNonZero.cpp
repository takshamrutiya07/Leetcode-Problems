#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isValid(int num) {
        while(num > 0) {
            if(num % 10 == 0) return false;
            num /= 10;
        }
        return true;
    }
    vector<int> getNoZeroIntegers(int n){
       for(int i=1;i<n;i++) {
            int a = n-i;
            if (isValid(i) && isValid(a)) {
                return {a, i};
            }
        }
        return {n-1,1};
    }
};
int main() {
    Solution s;
    int n=11;
    vector<int>ans;
    ans=s.getNoZeroIntegers(n);
    cout<<ans[0]<<","<<ans[1];
    return 0;
}
