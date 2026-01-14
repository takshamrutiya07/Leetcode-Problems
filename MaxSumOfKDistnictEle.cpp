#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> maxKDistinct(vector<int>& nums, int k) {
        int n=nums.size();
        if(n==1)return nums;
        sort(nums.begin(),nums.end());
        vector<int>ans;
        int i=0;
        while(i<n)
        {
            if(i>0 && nums[n-i] != nums[n-i-1])
            ans.push_back(nums[n-i]);
            if(ans.size()==k)
            return ans;
            i++;
        }
        ans.push_back(nums[n-i]);
        return ans;
    }
};
int main() {
    Solution s;
    vector<int>v={10,10,10};
    int k=2;
    vector<int>ans;
    ans=s.maxKDistinct(v,k);
    for(auto i:ans)
    {
        cout<<i<<" ";
    }
    return 0;
}
