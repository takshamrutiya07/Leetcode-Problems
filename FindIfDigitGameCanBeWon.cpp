#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool canAliceWin(vector<int>& nums) {
        int n=nums.size();
        int sum1=0;
        int sum2=0;
        for(int i=0;i<n;i++)
        {
            if(nums[i]<10)
            sum1 += nums[i];
            else
            sum2 += nums[i];
        }
        if(sum1==sum2)
        return false;

        return true;
    }
};

int main() {
    Solution s;
    vector<int>v={1,3,2,4,15};
    cout<<s.canAliceWin(v);
    return 0;
}
