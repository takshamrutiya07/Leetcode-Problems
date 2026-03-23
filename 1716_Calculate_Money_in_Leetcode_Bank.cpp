#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int totalMoney(int n) {
        int count=1,temp=1;
        int ans=0;
        for(int i=1;i<=n;i++)
        {
            ans += count;
            count++;
            if(i%7==0)
            {
                temp++;
                count=temp;
            }
        }
        return ans;
    }
};

int main() {
    Solution s;
    int n=10;
    cout<<s.totalMoney(n);
    return 0;
}
