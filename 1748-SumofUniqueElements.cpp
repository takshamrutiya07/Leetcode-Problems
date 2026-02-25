#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        vector<int>v(101,0);
        for(auto i:nums)
        {
            v[i]++;
        }
        int sum=0;
        for(int i=0;i<101;i++)
        {
            if(v[i]==1)
            sum += i;
        }
        return sum;
    }
};

int main() {
    Solution s;
    vector<int>v={1,2,3,2};
    cout<<s.sumOfUnique(v);
    return 0;
}
