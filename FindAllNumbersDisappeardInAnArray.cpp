#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        int n=nums.size();
        vector<int>v(n+1,0);
        vector<int>ans;
        for(int i=0;i<n;i++)
        {
            v[nums[i]]++;
        }
        for(int j=1;j<=n;j++)
        {
            if(v[j]==0)
            {
                ans.push_back(j);
            }
        }
        return ans;
    }
};
int main() {
    Solution s;
    vector<int>v={4,3,2,7,8,2,3,1};
    vector<int>ans=s.findDisappearedNumbers(v);
    for(auto i:ans)
    {
        cout<<i<<" ";
    }
    return 0;
}
