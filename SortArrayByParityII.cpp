#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) {
        int n=nums.size();
        vector<int>ans(n,0);
        int e=0;
        int o=1;
        for(int i=0;i<n;i++)
        {
            if(nums[i]%2==0)
            {
                ans[e]=nums[i];
                e+=2;
            }else{
                ans[o]=nums[i];
                o+=2;
            }
        }
        return ans;
    }
};
int main() {
    Solution s;
    vector<int>v={3,2};
    vector<int>ans;
    ans=s.sortArrayByParityII(v);
    for(auto x:ans)
    {
        cout<<x<<" ";
    }
    return 0;
}
