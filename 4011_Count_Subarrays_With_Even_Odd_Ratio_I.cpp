#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int countRatioSubarrays(vector<int>& nums, int a, int b) {
        int n = nums.size();
        int count = 0;
        for(int i=0;i<n;i++)
        {
            int even = 0;
            int odd = 0;
            for(int j=i;j<n;j++)
            {
                if(nums[j]%2)odd++;
                else even++;

                if(odd && (((even*1.0)/odd) <= (a*1.0)/b))
                {
                    count++;
                }
            }
        }
        return count;
    }
};

int main() {
    Solution s;
    vector<int>nums = {1,2,1,2};
    int a = 3;
    int b = 2;
    cout<<s.countRatioSubarrays(nums,a,b);
    return 0;
}
