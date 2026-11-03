#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int minMoves(vector<int>& nums) {
        int maxi = *max_element(nums.begin(),nums.end());
        int moves = 0;
        for(auto i:nums)
        {
            moves += abs(i-maxi);
        }
        return moves;
    }
};

int main() {
    Solution s;
    vector<int>nums = {1,2,3};
    cout<<s.minMoves(nums);
    return 0;
}
