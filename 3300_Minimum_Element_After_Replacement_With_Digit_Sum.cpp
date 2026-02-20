#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int digits(int n)
    {
        int sum=0;
        while(n>0)
        {
            sum += n%10;
            n /= 10;
        }
        return sum;
    }
    int minElement(vector<int>& nums) {
        int n=nums.size();
        int mini=INT_MAX;
        for(int i=0;i<n;i++)
        {
            mini=min(mini,digits(nums[i]));
        }
        return mini;
    }
};

int main() {
    Solution s;
    vector<int>v={10,12,13,14};
    cout<<s.minElement(v);
    return 0;
}
