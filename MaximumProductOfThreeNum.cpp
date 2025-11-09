#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int size=nums.size();
        return max(nums[0]*nums[1]*nums[size-1],
           nums[size-1]*nums[size-2]*nums[size-3]);
    }
};
int main() {
    Solution s;
    vector<int>v={1,2,3,4};
    cout<<s.maximumProduct(v);
    return 0;
}
