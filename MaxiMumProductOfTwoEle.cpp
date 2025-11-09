#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
     int maxProduct(vector<int>& nums) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        return (nums[n-1]-1)*(nums[n-2]-1);
    }
};
int main() {
    Solution s;
    vector<int>v={1,4,3,2,6,4};
    cout<<s.maxProduct(v);
    return 0;
}
