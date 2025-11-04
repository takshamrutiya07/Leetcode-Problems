#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        vector<int>v=nums;
        sort(v.begin(),v.end());
        int size=nums.size();
        int maxi=0;
        if(v[size-2]*2>v[size-1])
        {
            return -1;
        }
        for(int i=1;i<size;i++)
        {
            if(nums[i]>nums[maxi])
            maxi=i;
        }
        return maxi;
    }
};
int main() {
    Solution s;
    vector<int>v={1,3,6,2};
    cout<<s.dominantIndex(v);
    return 0;
}
