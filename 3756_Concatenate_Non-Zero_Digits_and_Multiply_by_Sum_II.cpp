#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> sumAndMultiply(string s, vector<vector<int>>& queries) {
        int MOD = 1e9+7;
        typedef long long ll;
        int n=s.size();
        vector<int>prefixsum(n,0);
        vector<ll>uptodigit(n,0);
        vector<ll>pow10(n+1,0);
        vector<int>nonzerocount(n,0);
        //finding prefix sum 
        prefixsum[0]=s[0]-'0';
        for(int i=1;i<n;i++)
        {
            prefixsum[i] = (prefixsum[i-1]+s[i]-'0');
        }

        //finding the pow10 
        pow10[0]=1;
        for(int i=1;i<=n;i++)
        {
            pow10[i] = (pow10[i-1]*10)%MOD;
        }

        //finding upto one index what are the non zero numbers present 
        int count=1;
        uptodigit[0]=s[0]-'0';
        for(int i=1;i<n;i++)
        {
            if(s[i]-'0' != 0)
            {
                uptodigit[i] = (uptodigit[i-1]*10 +s[i]-'0')%MOD;
            }else{
                uptodigit[i] = uptodigit[i-1];
            }
        }

        //finding the nonzero digit count up to particular index
        nonzerocount[0] = (s[0]-'0')!=0 ? 1:0;
        for(int i=1;i<n;i++)
        {
            int digit=s[i]-'0';
            nonzerocount[i] = nonzerocount[i-1] + ((digit!=0) ? 1:0);
        }
        int q=queries.size();
        vector<int>ans(q);
        for(int i=0;i<q;i++)
        {
            int l=queries[i][0];
            int r=queries[i][1];
            ll sum = prefixsum[r] - ((l == 0) ? 0 : prefixsum[l - 1]); // O(1)

            int numBefore = (l == 0) ? 0 : uptodigit[l - 1];
            int k = nonzerocount[r] - ((l == 0) ? 0 : nonzerocount[l - 1]);
            ll x = (uptodigit[r] - (numBefore * pow10[k]) % MOD + MOD) % MOD;

            ans[i] = (int)((x * sum) % MOD);
        }
        return ans;
    }
};

int main() {
    Solution s;
    string str="020304";
    vector<vector<int>>v={{0,7},{1,3},{4,6}};
    vector<int>ans;
    ans=s.sumAndMultiply(str,v);
    return 0;
}
