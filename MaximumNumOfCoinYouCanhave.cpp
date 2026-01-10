#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxCoins(vector<int>& piles) {
        int n=piles.size();
        int st=0,mid=n-2,la=n-1;
        int sum=0;
        sort(piles.begin(),piles.end());
        while(st<=mid)
        {
            sum += piles[mid];
            st++;
            mid -= 2;
            la -= 2;
        }
        return sum;
    }
};
int main() {
    Solution s;
    vector<int>v={2,4,1,2,7,8};
    cout<<s.maxCoins(v);
    return 0;
}
