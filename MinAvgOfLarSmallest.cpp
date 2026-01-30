#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    double minimumAverage(vector<int>& nums) {
        double mini=INT_MAX;
        double avg=0;
        int n=nums.size();
        sort(nums.begin(),nums.end());
        for(int i=0;i<n/2;i++)
        {
            avg=(nums[i]+nums[n-i-1])/2.0;
            mini=min(avg,mini);
        }
        return mini;
    }
};
int main() {
    Solution s;
    vector<int>v={7,8,3,4,15,13,4,1};
    cout<<s.minimumAverage(v);
    return 0;
}
