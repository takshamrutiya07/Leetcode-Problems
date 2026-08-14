#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int totalHammingDistance(vector<int>& nums) {
        int sum = 0;
        for(int j=0;j<32;j++)
        {
            int countzero=0;
            int countones=0;
            for(int i=0;i<nums.size();i++)
            {
                if(nums[i]%2)countones++;
                else countzero++;
                nums[i] = nums[i]>>1;
            }
            sum += (countzero*countones);
        }
        return sum;   
    }
};

int main() {
    Solution s;
    vector<int>v={4,14,2};
    cout<<s.totalHammingDistance(v);
    return 0;
}
