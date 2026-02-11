#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int countPartitions(vector<int>& nums) {
        int sum=0;
        for(auto i:nums)
        {
            sum += i;
        }
        int left=0;
        int count=0;
        int right=sum;
        for(int i=0;i<nums.size()-1;i++)
        {
            left += nums[i];
            right -= nums[i];
            if((right-left)%2==0)
            count++;
        }
        return count;
    }
};
int main() {
    Solution s;
    vector<int>v={10,10,3,7,6};
    cout<<s.countPartitions(v);
    return 0;
}
