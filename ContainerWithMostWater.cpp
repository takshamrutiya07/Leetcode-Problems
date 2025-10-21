#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int maxArea(vector<int>& height) {
        int maxwater=0;
        int lp=0,rp=height.size()-1;
        while(lp<rp)
        {
            int w=rp-lp;
            int hig=min(height[lp],height[rp]);
            int curwater=w*hig;
            maxwater=max(maxwater,curwater);
            height[lp]<height[rp] ? lp++ : rp--;// if we change the minimum value then and then we can find the maximum water
        }
        return maxwater;
    }
};
int main() {
    Solution s;
    vector<int>v={1,8,4,5,7,3,5,7};
    cout<<s.maxArea(v);
    return 0;
}
