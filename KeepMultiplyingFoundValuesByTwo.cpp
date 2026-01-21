#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int findFinalValue(vector<int>& nums, int original) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        for(int i=0;i<n;i++)
        {
            if(nums[i]==original)
            original *= 2;  
        }
        return original;
    }
};

int main() {
    Solution s;
    vector<int>v={5,3,6,1,12};
    int target=3;
    cout<<s.findFinalValue(v,target);
    return 0;
}
