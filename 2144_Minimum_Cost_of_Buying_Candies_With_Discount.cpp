#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int minimumCost(vector<int>& cost) {
        int n=cost.size();
        sort(cost.begin(), cost.end(), greater<int>());
        int sum=0;
         for(int i=0;i<n;i++) {
            if(i % 3 != 2) 
            {
                sum += cost[i];
            }
        }
        return sum;
    }
};
int main() {
    Solution s;
    vector<int>v={6,5,7,9,2,2};
    cout<<s.minimumCost(v);
    return 0;
}
