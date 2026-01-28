#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        long long sum=0;
        int dupli=0;
        for(int i=0;i<n;i++)
        {
            sum += nums[i];
            if(i > 0 && nums[i] == nums[i - 1])
            {
                dupli = nums[i];
            }
        }
        long long s=n*(n+1)/2;
        int miss=s-(sum-dupli);
        return {dupli,miss};  
    }
};
int main() {
    Solution s;
    vector<int>v={1,2,4,2};
    vector<int>ans=s.findErrorNums(v);
    for(auto i:ans)
    {
        cout<<i<<" ";
    }
    return 0;
}
