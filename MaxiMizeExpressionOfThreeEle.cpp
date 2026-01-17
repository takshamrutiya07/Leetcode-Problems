#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
     int maximizeExpressionOfThree(vector<int>& nums) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        return nums[n-1]+nums[n-2]-nums[0];
    }
};

int main() {
    Solution s;
    vector<int>v={-2,0,5,-2,4};
    cout<<s.maximizeExpressionOfThree(v);
    return 0;
}
