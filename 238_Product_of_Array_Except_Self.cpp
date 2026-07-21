#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int>ans(n,0);
        ans[0]=1;
        for(int i=1;i<n;i++)
        {
            ans[i] = ans[i-1]*nums[i-1];
        }
        int suffix=1;
        for(int i=n-1;i>=0;i--)
        {
            ans[i] *= suffix;
            suffix *= nums[i];
        }
        return ans;

    }
};

int main() {
    Solution s;
    vector<int>nums={1,2,3,4};
    vector<int>ans;
    ans=s.productExceptSelf(nums);
    for(auto i:ans)
    {
        cout<<i<<" ";
    }
    return 0;
}
