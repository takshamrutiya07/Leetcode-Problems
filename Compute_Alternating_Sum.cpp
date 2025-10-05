#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int alternatingSum(vector<int>& nums) {
        if(nums.size()==1)return nums[0];
        int sum = 0;
        for(int i=0;i<nums.size();i++){
            if(i%2==0) sum = sum + nums[i];
            else sum = sum - nums[i];
        }
        return sum; 
    }
};
int main() {
    Solution s;
    vector<int>sums={1,2,3,4,5,6};
    cout<<s.alternatingSum(sums);
    return 0;
}
