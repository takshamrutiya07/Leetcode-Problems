#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int maxi=*max_element(candies.begin(),candies.end());
        int n=candies.size();
        vector<bool>ans(n,false);
        for(int i=0;i<n;i++)
        {
            if(candies[i]+extraCandies>=maxi)
            ans[i]=1;
        }
        return ans;
    }
};

int main() {
    Solution s;
    vector<int>v={1,3,5,1,3};
    int extracandies=3;
    vector<bool>ans = s.kidsWithCandies(v,extracandies);
    for(auto i:ans)
    {
        cout<<i<<" ";
    }
    return 0;
}
