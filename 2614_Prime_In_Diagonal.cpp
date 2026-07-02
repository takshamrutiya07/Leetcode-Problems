#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool isPrime(int n){
    if (n < 2)
        return false;
    if (n == 2)
        return true;
    if (n % 2 == 0)
        return false;

    for (int i = 3; i * i <= n; i += 2)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}
    int diagonalPrime(vector<vector<int>>& nums) {
        int n=nums[0].size();
        int maxi=0;
        for(int i=0;i<n;i++)
        {
            if(isPrime(nums[i][i]))
            {
                maxi = max(maxi,nums[i][i]);
            }
            if(isPrime(nums[i][n-i-1]))
            {
                maxi = max(maxi,nums[i][n-i-1]);
            }
        }
        return maxi;
    }
};
int main() {
    Solution s;
    vector<vector<int>>nums={{1,2,3},{4,5,6},{7,8,9}};
    cout<<s.diagonalPrime(nums);
    return 0;
}
