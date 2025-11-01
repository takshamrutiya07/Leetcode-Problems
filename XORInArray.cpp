#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
     int xorOperation(int n, int start) {
        int ans=0;
        for(int i=0;i<n;i++)
        {
            int num=start+2*i;
            ans=ans ^ num;   
        }
        return ans;
    }
};
int main() {
    Solution s;
    int start=0;
    int n=5;
    cout<<s.xorOperation(n,start);
    return 0;
}
