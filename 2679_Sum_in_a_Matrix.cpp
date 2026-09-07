#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int matrixSum(vector<vector<int>>& nums) {
        int n = nums.size();
        for(int i=0;i<n;i++)
        {
            sort(nums[i].begin(),nums[i].end(),greater<int>());
        }
        int sum = 0;
        for(int i=0;i<nums[0].size();i++)
        {
            int maxi = INT_MIN;
            for(int j=0;j<n;j++)
            {
                maxi = max(maxi,nums[j][i]);
            }
            sum += maxi;
        }
        return sum;
    }
};

int main() {
    Solution s;
    vector<vector<int>> nums = {{1,3,2},{4,3,7},{2,5,3}};
    cout<<s.matrixSum(nums);
    return 0;
}
