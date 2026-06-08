#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int p) {
        vector<int> ans;
        for(int x : nums)
            if(x < p)
                ans.push_back(x);

        for(int x : nums)
            if(x == p)
                ans.push_back(x);

        for(int x : nums)
            if(x > p)
                ans.push_back(x);

        return ans;
    }
};
int main() {
    Solution s;
    vector<int>v={9,12,5,10,14,3,10};
    vector<int>ans;
    ans=s.pivotArray(v,10);
    for(auto i:ans)
    {
        cout<<i<<" ";
    }
    return 0;
}
