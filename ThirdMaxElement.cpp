#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int thirdMax(vector<int>& nums) {
        int size=nums.size();
        sort(nums.begin(), nums.end());
        if (size<3) {
            return nums[size - 1];
        }
        int i=size-1;
        int count=1;
        while(i>0)
        {
            if(nums[i-1]!=nums[i])
            {
                count++;
                if(count==3)
                {
                    return nums[i-1];
                }
            }
            i--;
        }
        return nums[size-1];
    }
};
int main() {
    Solution s;
    vector<int>nums={1,1,1,1,1};
    cout<<s.thirdMax(nums);
    return 0;
}
