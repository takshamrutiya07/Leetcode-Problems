#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int maxi=0;
        int sum=0;
        for(auto i:gain)
        {
            sum += i;
            maxi = max(sum,maxi);
        }
        return maxi;
    }
};

int main() {
    Solution s;
    vector<int>v={-5,1,5,0,-7};
    cout<<s.largestAltitude(v);
    return 0;
}
