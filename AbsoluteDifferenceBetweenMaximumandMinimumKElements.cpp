#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int absDifference(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        int sum1=0;
        int sum2=0;
        for(int i=0;i<k;i++)
        {
            sum1 += nums[i];
            sum2 += nums[n-i-1]; 
        }
        return sum2-sum1;
    }
};
int main() {
    Solution s;
    vector<int>v={1,4,4,5};
    int k=2;
    cout<<s.absDifference(v,k);
    return 0;
}
