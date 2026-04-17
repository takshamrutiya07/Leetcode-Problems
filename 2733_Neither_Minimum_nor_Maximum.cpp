#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
     int findNonMinOrMax(vector<int>& nums) {
         if(nums.size()<=2)return -1;
        int n=nums.size();
        sort(nums.begin(),nums.end());
        return nums[n/2];
    }
};

int main() {
    Solution s;
    vector<int>v={3,2,1,4};
    return 0;
}
