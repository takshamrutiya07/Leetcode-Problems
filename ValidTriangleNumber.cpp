#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool validTriangle(int a,int b,int c)
    {
        return a+b>c;
    }
    int triangleNumber(vector<int>& nums) {
        int size=nums.size();
        if(size<3) return 0;
        sort(nums.begin(),nums.end());
        int ans=0;
        for(int i=0;i<size-2;i++)
        {
            for(int j=i+1;j<size-1;j++)
            {
                for(int z=j+1;z<size;z++)
                {
                    if(validTriangle(nums[i],nums[j],nums[z]))
                    ans++;
                }
            }
        }
        return ans;
    }
};
int main() {
    Solution s;
    vector<int>nums={2,2,3,4};
    cout<<s.triangleNumber(nums);
    return 0;
}
