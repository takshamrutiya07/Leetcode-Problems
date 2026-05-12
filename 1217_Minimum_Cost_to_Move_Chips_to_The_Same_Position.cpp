#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int minCostToMoveChips(vector<int>& position) {
        int n=position.size();
        int odd=0;
        int even=0;
        for(auto i:position)
        {
            if(i%2)
            odd++;
            else
            even++;
        }
        if(odd<even)
        return odd;
        return even;
    }
};
int main() {
    Solution s;
    vector<int>v={1,2,3};
    cout<<s.minCostToMoveChips(v);
    return 0;
}
