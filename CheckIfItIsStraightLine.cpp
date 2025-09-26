#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool checkStraightLine(vector<vector<int>>& coordinates) {
        int size=coordinates.size();
        int i=0;
        int diff1=coordinates[1][0]-coordinates[0][0];
        int diff2=coordinates[1][1]-coordinates[0][1];
        for(i=0;i<size-1;i++)
        {
           int dx=coordinates[i+1][0]-coordinates[i][0];
           int dy=coordinates[i+1][1]-coordinates[i][1];
           if(dy*diff1 != dx*diff2)
           {
                return 0;
           }
        }
        return 1;
    }
};
int main() {
    Solution s;
    vector<vector<int>>c={{-1,-2},{-2,-3},{-3,-4},{-5,-6}};
    cout<<s.checkStraightLine(c);
    return 0;
}
