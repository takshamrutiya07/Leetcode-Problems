#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
     string triangleType(vector<int>& nums) {
        if(nums[0]==nums[1] && nums[1]==nums[2])
            {
                return "equilateral";
            }
        else{
            if(nums[0]+nums[1]>nums[2] && nums[0]+nums[2]>nums[1] && nums[1]+nums[2]>nums[0])
            {
                if(nums[0]==nums[1] || nums[0]==nums[2] || nums[1]==nums[2])
                    {
                        return "isosceles";
                    }
                return "scalene";
                }
            }
        return "none";
    }
};
int main() {
    Solution s;
    vector<int>v={3,3,3};
    cout<<s.triangleType(v);
    return 0;
}
