#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<vector<int>> divideArray(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int n = nums.size();
        vector<vector<int>>v(n/3,vector<int>(3,0));
        int count=0;
        for(int i=0;i<n;i+=3)
        {
            if(nums[i+2]-nums[i]<=k)
            {
                v[count][0]=(nums[i]);
                v[count][1]=(nums[i+1]);
                v[count][2]=(nums[i+2]);
                count++;
            }else
            return {};
        }
        return v;
    }
};
int main() {
    Solution s;
    vector<int>v = {1,3,4,8,7,9,3,5,1};
    vector<vector<int>>ans;
    ans = s.divideArray(v,2);
    for(auto i:ans)
    {
        for(auto j:i)
        {
            cout<<j<<" ";
        }
        cout<<endl;
    }
    return 0;
}
