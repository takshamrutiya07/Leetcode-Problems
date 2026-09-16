#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isprime(int n){
        if(n < 2) return false;

        for(int i = 2; i * i <= n; i++){
            if(n % i == 0){
                return false;
            }
        }
        return true;
    }
    int maximumPrimeDifference(vector<int>& nums) {
        int n = nums.size();
        int mini = INT_MAX;
        int maxi = INT_MIN;

        for(int i = 0; i < n; i++){
            if(isprime(nums[i])){
                mini = min(mini, i);
                maxi = max(maxi, i);
            }
        }
        return maxi - mini;
    }
};

int main() {
    Solution s;
    vector<int>nums={1,2,3,4,5};
    cout<<s.maximumPrimeDifference(nums);
    return 0;
}
