#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int countKDifference(vector<int>& nums, int k) {
        int n=nums.size();
        int count=0;
        for(int i=0;i<n-1;i++)
        {
            for(int j=1;j<n;j++)
            {
                if(abs(nums[i]-nums[j])==k)
                count++;
            }
        }
        return count;
    }
};
int main() {
    Solution s;
    vector<int>v={1,2,2,1};
    cout<<s.countKDifference(v,1);
    return 0;
}
