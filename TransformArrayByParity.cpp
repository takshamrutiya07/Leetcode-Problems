#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> transformArray(vector<int>& nums) {
        int n=nums.size();
        for(int i=0;i<n;i++)
        {
            if(nums[i]%2)
            {
                nums[i]=1;
            }else{
                nums[i]=0;
            }
        }
        sort(nums.begin(),nums.end());
        return nums;
    }
};
int main() {
    Solution s;
    vector<int>v={1,3,2,4,5,6};
    vector<int>ans;
    ans=s.transformArray(v);
    for(auto x:v)
    {
        cout<<x<<" ";
    }
    return 0;
}
