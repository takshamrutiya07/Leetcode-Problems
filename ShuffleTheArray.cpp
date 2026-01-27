#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int>ans;
        for(int i=0;i<n;i++)
        {
            ans.push_back(nums[i]);
            ans.push_back(nums[n+i]);
        }
        return ans;
    }
};
int main() {
    Solution s;
    vector<int>v={2,5,1,3,4,7};
    vector<int>ans=s.shuffle(v,3);
    for(auto i:ans)
    {
        cout<<i<<" ";
    }
    return 0;
}
