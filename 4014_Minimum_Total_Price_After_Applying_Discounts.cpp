#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    double minPrice(vector<int>& prices, vector<int>& discounts) {
        int n=min(prices.size(),discounts.size());
        double sum = 0;
        sort(prices.begin(),prices.end(),greater<int>());
        sort(discounts.begin(),discounts.end(),greater<int>());
        for(int i=0;i<n;i++)
        {
            sum += (prices[i]*(100.0-discounts[i]))/100.0;
        }
        if(prices.size()>discounts.size())
        {
            for(int j=n;j<prices.size();j++)
            {
                sum += prices[j];
            }
        }
        return sum;
    }
};

int main() {
    Solution s;
    vector<int>prices={10,30,21};
    vector<int>discounts={50,60};
    cout<<s.minPrice(prices,discounts);
    return 0;
}
