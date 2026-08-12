#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n = nums.size();
        vector<int>prefixsum(n,0);
        prefixsum[0]=nums[0];
        for(int i=1;i<n;i++)
        {
            prefixsum[i] = nums[i] + prefixsum[i-1];
        }
        int count=0;
        for(int i=0;i<n;i++)
        {
            int sum=0;
            for(int j=i;j<n;j++)
            {
                if(i==j)sum = nums[j];
                else if(i==0) sum = prefixsum[j];
                else sum = prefixsum[j]-prefixsum[i-1];

                if(sum==k)count++;
            }
        }
        return count;
    }
};

int main() {
    Solution s;
    vector<int>nums={1,1,1};
    int k = 3;
    cout<<s.subarraySum(nums,k);
    return 0;
}
