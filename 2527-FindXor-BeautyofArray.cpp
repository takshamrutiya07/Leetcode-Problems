#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int xorBeauty(vector<int>& nums) {
        int ans=0;
        for(auto i:nums)
        {
            ans ^= i;
        }
        return ans;
    }
};
int main() {
    Solution s;
    vector<int>v={1,4};
    cout<<s.xorBeauty(v);
    return 0;
}
