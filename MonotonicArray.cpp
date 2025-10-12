#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        vector<int>org_nums=nums;
        sort(nums.begin(),nums.end());
        if(org_nums==nums)
        {
            return 1;
        }
        reverse(nums.begin(),nums.end());
        return org_nums==nums;
    }
};

int main() {
    Solution s;
    vector<int>v={1,2,2,3};
    cout<<s.isMonotonic(v);
    return 0;
}
