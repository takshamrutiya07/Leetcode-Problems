#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int climbStairs(int n, vector<int>& costs) {
        vector<int> dp(n + 1, INT_MAX);
        dp[0] = 0;
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= 3; j++) {
                if (i - j >= 0) {
                    dp[i] = min(dp[i], dp[i - j] + costs[i - 1] + j * j);
                }
            }
        }
        return dp[n];
    }
};
int main() {
    Solution s;
    vector<int>v = {1,2,3,4};
    int n = 4;
    cout<<s.climbStairs(n,v);
    return 0;
}
