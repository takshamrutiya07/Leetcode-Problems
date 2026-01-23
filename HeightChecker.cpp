#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int heightChecker(vector<int>& heights) {
        vector<int>v=heights;
        int count=0;
        sort(heights.begin(),heights.end());
        for(int i=0;i<heights.size();i++)
        {
            if(heights[i] != v[i])
            count++;
        }
        return count;
    }
};
int main() {
    Solution s;
    vector<int>v={1,1,4,2,1,3};
    cout<<s.heightChecker(v);
    return 0;
}
