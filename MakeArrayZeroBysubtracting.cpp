#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        int count=0;
        for(int i = 0; i < nums.size(); i++) 
        {
            if(nums[i] != 0 && (i == 0 || nums[i] != nums[i-1]))
            {
            count++;
            }
        }
    return count;
    }
};
int main() {
    Solution s;
    vector<int>v={4};
    cout<<s.minimumOperations(v);
    return 0;
}
