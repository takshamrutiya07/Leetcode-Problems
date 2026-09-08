#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> onesMinusZeros(vector<vector<int>>& grid) {
        // int row = grid.size();
        // int col = grid[0].size();
        // vector<int>onesrow(row,0);
        // vector<int>zerorow(row,0);
        // vector<int>onescol(col,0);
        // vector<int>zerocol(col,0);
        // vector<vector<int>>ans(row);
        // for(int i=0;i<row;i++)
        // {
        //     for(int j=0;j<col;j++)
        //     {
        //         if(grid[i][j] == 1)
        //         onesrow[i]++;
        //         else if(grid[i][j] == 0)
        //         zerorow[i]++;   
        //     }
        // }
        // for(int i=0;i<col;i++)
        // {
        //     for(int j=0;j<row;j++)
        //     {
        //         if(grid[j][i] == 1)
        //         onescol[i]++;
        //         else if(grid[j][i] == 0)
        //         zerocol[i]++;   
        //     }
        // }
        // for(int i=0;i<row;i++)
        // {
        //     for(int j=0;j<col;j++)
        //     {
        //         int needtopush = (onescol[j]+onesrow[i]) - (zerocol[j]+zerorow[i]);
        //         ans[i].push_back(needtopush);
        //     }
        // }
        // return ans;



        int row=grid.size();
        int col=grid[0].size();
        vector<int> rowones(row,0);
        vector<int> colones(col,0);
        for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
                if(grid[i][j]==1){
                    rowones[i]++;
                    colones[j]++;
                }
            }
        }

        vector<vector<int>> diff(row,vector<int>(col,0));
        for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
                diff[i][j]=rowones[i]+colones[j]-(col-rowones[i])-(row-colones[j]);
            }
        }
        return diff;
    }
};

int main() {
    Solution s;
    vector<vector<int>>v={{0,1,1},{1,0,1},{0,0,1}};
    vector<vector<int>>ans;
    ans = s.onesMinusZeros(v);
    for(auto i:ans)
    {
        for(auto j:i)
        {
            cout<<j<<" ";
        }
        cout<<endl;
    }
    return 0;
}
