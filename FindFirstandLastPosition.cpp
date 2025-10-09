#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int>position={-1,-1};
        int size=nums.size();
        for(int i=0;i<size;i++)
        {
            if(position[0]==-1 && nums[i]==target)
            {
                position[0]=i;
            }
            if(position[0]!=-1 && nums[i]==target)
            {
                position[1]=i;
            }
        }
        return position;
    }
};
int main() {
    Solution s;
    vector<int>v={5,7,7,8,8,9};
    vector<int>ans={};
    ans=s.searchRange(v,6);
    cout<<ans[0]<<"  "<<ans[1];
    return 0;
}
