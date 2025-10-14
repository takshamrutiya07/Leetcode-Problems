#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        vector<int>ans={};
        int size=nums.size();
        sort(nums.begin(),nums.end());
        for(int i=0;i<size-1;i+=2)
        {
            if(nums[i]!=nums[i+1])
            {
                ans.push_back(nums[i]);
                if(ans.size()==2)
                {
                    return ans; 
                }
            }
        }
        if(nums[size-1] != nums[size-2])
        {
            ans.push_back(nums[size-1]);
        }
        return ans;
    }
};
int main() {
    Solution s;
    vector<int>v={1,1,3,2,2,4};
    vector<int>ans;
    ans=s.singleNumber(v);
    for(int i=0;i<ans.size();i++)
    {
        cout<<ans[i]<<" ";
    }
    return 0;
}
