#include <bits/stdc++.h>
using namespace std;
class Solution {
    // int solve(int i,int j,vector<vector<int>>&v,int &m,int &n)
    // {
    //     if(i==m-1 && j==n-1)
    //     return 1;//we found one path to reach [m-1][n-1]

    //     if(i<0 || i>=m || j<0 || j>=n)
    //     return 0;

    //     if(v[i][j] != -1)
    //     {
    //         return v[i][j];
    //     }

    //     int right = solve(i,j+1,v,m,n);
    //     int down = solve(i+1,j,v,m,n);

    //     return v[i][j] = right+down;
    // }
public:
    int uniquePaths(int m, int n) {
        // vector<vector<int>>v(m,vector<int>(n,-1));
        // return solve(0,0,v,m,n);
        vector<vector<int>>v(m,vector<int>(n));
        // fill 0th row with 1;
        for(int col=0;col<n;col++)
        {
            v[0][col] = 1;
        }
        // fill 0th col with 1;
        for(int row=0;row<m;row++)
        {
            v[row][0] = 1;
        }
        for(int i=1;i<m;i++)
        {
            for(int j=1;j<n;j++)
            {
                v[i][j] = v[i-1][j] + v[i][j-1];
            }
        }
        return v[m-1][n-1];
    }
};

int main() {
    Solution s;
    int m = 3;
    int n = 2;
    cout<<s.uniquePaths(m,n);
    return 0;
}
