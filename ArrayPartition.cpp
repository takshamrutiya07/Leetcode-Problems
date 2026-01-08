#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int arrayPairSum(vector<int>& nums) {
        int size=nums.size();
        sort(nums.begin(),nums.end());
        int sum=0;
        for(int i=0;i<size;i+=2)
        {
           sum += nums[i];
        }
        return sum;
    }
};
int main() {
    Solution s;
    vector<int>v={1,2,3,4};
    cout<<s.arrayPairSum(v);
    return 0;
}
