#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        int sum=0;
        for(int i=0;i<nums.size();i++)
        {
            sum += nums[i];
        }
        return sum%k;
    }
};
int main() {
    Solution s;
    vector<int>nums={1,3,5};
    int k=5;
    cout<<s.minOperations(nums,k);
    return 0;
}
