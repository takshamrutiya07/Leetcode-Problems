#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int mini=INT_MAX;
        int maxi=0;
        int sum=0;
        int minitemp=INT_MAX;
        int maxitemp=0;
        for(int i=0;i<prices.size();i++)
        {
            mini=min(prices[i],mini);
            maxi=max(maxi,prices[i]-mini);
            if(i+1 < prices.size() && prices[i+1] < prices[i])
            {
                sum += maxi;
                maxi=0;
                mini=INT_MAX;
            }
            minitemp=min(minitemp,prices[i]);
            maxitemp=max(maxitemp,prices[i]-minitemp);
        }
        sum += maxi;
        return sum>maxitemp?sum:maxitemp;
    }
};
int main() {
    Solution s;
    vector<int>p={6,1,3,2,4,7};
    cout<<s.maxProfit(p);
    return 0;
}
