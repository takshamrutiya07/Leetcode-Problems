#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        int n=nums.size();
        vector<int>left(n,0);
        vector<int>right(n,0);
        for(int i=1;i<n;i++)
        {
            left[i]=left[i-1]+nums[i-1];
        }
        for(int i=n-2;i>=0;i--)
        {
            right[i]=right[i+1]+nums[i+1];
        }
        for(int i=0;i<n;i++)
        {
            nums[i]=abs(left[i]-right[i]);
        }
        return nums;
    }
};
int main() {
    Solution s;
    vector<int>v={10,4,8,3};
    vector<int>ans;
    ans=s.leftRightDifference(v);
    for(auto i:ans)
    {
        cout<<i<<" ";
    }
    return 0;
}
