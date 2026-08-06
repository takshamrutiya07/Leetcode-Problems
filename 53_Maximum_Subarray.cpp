#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        // Kadane's Algorithm
        int sum = 0;
        int maxi = INT_MIN ;
        for(auto i:nums)
        {
            sum += i;
            if(sum < i)
            {
                sum = i;
            }
            maxi = max(sum,maxi);
        }
        return maxi;

    //      int crossSum(vector<int>& nums, int left, int mid, int right) {
    //     int leftSum = INT_MIN;
    //     int sum = 0;

    //     for (int i = mid; i >= left; i--) {
    //         sum += nums[i];
    //         leftSum = max(leftSum, sum);
    //     }

    //     int rightSum = INT_MIN;
    //     sum = 0;

    //     for (int i = mid + 1; i <= right; i++) {
    //         sum += nums[i];
    //         rightSum = max(rightSum, sum);
    //     }

    //     return leftSum + rightSum;
    // }

    // int solve(vector<int>& nums, int left, int right) {
    //     if (left == right)
    //         return nums[left];

    //     int mid = (left + right) / 2;

    //     int leftAns = solve(nums, left, mid);
    //     int rightAns = solve(nums, mid + 1, right);
    //     int crossAns = crossSum(nums, left, mid, right);

    //     return max({leftAns, rightAns, crossAns});
    // }

    // int maxSubArray(vector<int>& nums) {
    //     return solve(nums, 0, nums.size() - 1);
    }
};

int main() {
    Solution s;
    vector<int>nums={-2,1,-3,4,-1,2,1,-5,4};
    cout<<s.maxSubArray(nums);
    return 0;
}
