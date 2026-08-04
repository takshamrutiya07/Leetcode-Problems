#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        int n=nums.size();
        vector<bool>check(101,false);
        int mini = *min_element(nums.begin(),nums.end());
        int maxi = *max_element(nums.begin(),nums.end());
        vector<int>ans;
        for(auto i:nums)
        {
            check[i] = true;
        }
        for(int i=mini;i<=maxi;i++)
        {
            if(!check[i])ans.push_back(i);
        }
        return ans;
    }
};

int main() {
    Solution s;
    vector<int>v={1,2,3,4,6,8};
    vector<int>ans;
    ans = s.findMissingElements(v);
    for(auto i:ans)
    {
        cout<<i<<" ";
    }
    return 0;
}
