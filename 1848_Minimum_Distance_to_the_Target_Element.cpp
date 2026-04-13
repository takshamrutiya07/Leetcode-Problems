#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int getMinDistance(vector<int>& nums, int target, int start) {
        int mini=INT_MAX;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==target)
            {
                mini = min(mini,abs(i-start));
                if(abs(i-start)>mini)
                break;
            }
        }
        return mini;
    }
};
int main() {
    Solution s;
    vector<int>v={1,2,3,4,5};
    int target=5;
    int start=3;
    cout<<s.getMinDistance(v,target,start);
    return 0;
}
