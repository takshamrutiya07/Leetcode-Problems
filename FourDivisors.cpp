#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int sumFourDivisors(vector<int>& nums) {
        int sum=0;
        for(int i=0;i<nums.size();i++)
        {
            int divisors=2;
            int temp=nums[i]+1;
            for(long long j=2;j*j<=nums[i];j++)
            {
                if(nums[i]%j==0)
                {
                    if(j==nums[i]/j)
                    {
                        divisors += 1;
                        temp += j;
                    }    
                    else{
                        divisors += 2;
                        temp += j;
                        temp += (nums[i]/j);
                    }
            }
            }
            if(divisors==4)
            {
                sum += temp;
            }
        }
        return sum;
    }
};
int main() {
    Solution s;
    vector<int>nums={2,3,7,4,21};
    cout<<s.sumFourDivisors(nums);
    return 0;
}
