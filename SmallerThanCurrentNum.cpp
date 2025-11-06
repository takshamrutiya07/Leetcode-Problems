#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
     vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        int n=nums.size();
        int count=0;
        vector<int>ans;
        for(int i=0;i<n;i++)
        {
            count=0;
            for(int j=0;j<n;j++)
            {
                if(i!=j && nums[j]<nums[i])
                {
                    count++;
                }
            }
            ans.push_back(count);
        }
        return ans;
    }
};
int main() {
    Solution s;
    vector<int>ans;
    vector<int>v={1,2};
    ans=s.smallerNumbersThanCurrent(v);
    for(auto i : ans)
    {
        cout<<i<<" ";
    }
    return 0;
}
