#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int>ans;
        int n=nums.size();
        for(int i=0;i<n;i++)
        {
            int idx=abs(nums[i])-1;

            if(nums[idx]<0)
            {
                ans.push_back(abs(nums[i]));
            }else{
                nums[idx]*= (-1);
            }
        }
        return ans;
    }
};

int main() {
    Solution s;
    vector<int>v={4,3,2,7,8,2,3,1};
    vector<int>ans;
    ans=s.findDuplicates(v);
    for(auto i:ans)
    {
        cout<<i<<" ";
    }
    return 0;
}
