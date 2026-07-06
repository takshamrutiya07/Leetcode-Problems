#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int removeCoveredIntervals(vector<vector<int>>& intervals) {
        int n=intervals.size();
        int count=0;
        vector<bool>check(n,0);
        for(int i=0;i<n;i++)
        {
            if(check[i]) continue;
            for(int j=0;j<n;j++)
            {
                if(check[j] || i==j)continue;
                if((intervals[j][0]>=intervals[i][0]) && (intervals[i][1]>=intervals[j][1])) 
                {
                    check[j]=1;
                }
            }
        }
        for(auto i:check)
        {
            if(!i)count++;
        }
        return count;
    }
};

int main() {
    Solution s;
    vector<vector<int>> intervals = {{1,4},{2,8},{3,6}};
    cout<<s.removeCoveredIntervals(intervals);
    return 0;
}
