#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {
        int n=prices.size();
        vector<int>ans;
        for(int i=0;i<n-1;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                if(prices[i]>=prices[j])
                {
                    prices[i] = prices[i]-prices[j];
                    break;
                }
            }
        }
       return prices; 
    }
};

int main() {
    Solution s;
    vector<int>v={8,4,6,2,3};
    vector<int>ans;
    ans=s.finalPrices(v);
    for(auto i:ans)
    {
        cout<<i<<" ";
    }
    return 0;
}
