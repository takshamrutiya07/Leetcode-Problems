#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
     int maximizeSum(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int size=nums.size();
        int n=nums[size-1];
        int sum=0;
        for(int i=0;i<k;i++)
        {
            sum += n++;
        }
        return sum;
    }
};
int main() {
    Solution s;
    vector<int>v={1,2,3,4,5};
    int k=3;
    cout<<s.maximizeSum(v,k);
    return 0;
}
