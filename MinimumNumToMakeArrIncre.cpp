#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int minOperations(vector<int>& nums) {
        int n=nums.size();
        int opr=0;
        for(int i=1;i<n;i++)
        {
           if(nums[i]<=nums[i-1])
           {
               opr += (nums[i-1]-nums[i]+1);
               nums[i] += nums[i-1]-nums[i]+1;
           }
        }
        return opr;
    }
};
int main() {
    Solution s;
    vector<int>v={1,5,2,4,1};
    cout<<s.minOperations(v);
    return 0;
}
