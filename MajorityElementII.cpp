#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int size=nums.size();
        sort(nums.begin(),nums.end());
        int count=1;
        vector<int>v;
        if(size==1)v.push_back(nums[0]);
        if(size==2 && (nums[0] != nums[1]))
        {
            v.push_back(nums[0]);
            v.push_back(nums[1]);
        }
        for(int i=1;i<size;i++)
        {
            if(nums[i]==nums[i-1])
            {
                count++;
            }else{
                count=1;
            }
            if(count > size/3)
            {
                if(v.empty() || v.back() != nums[i])
                 v.push_back(nums[i]);
            }
        }
        return v;
    }
};
int main() {
    Solution s;
    vector<int>n={0,0,0};
    vector<int>ans;
    ans=s.majorityElement(n);
    for(auto i:ans)
    {
        cout<<i<<" ";
    }
    return 0;
}
