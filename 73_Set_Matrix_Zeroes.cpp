#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int column = matrix[0].size();
        int row = matrix.size();
        vector<vector<int>>v;
        for(int i=0;i<row;i++)
        {
            for(int j=0;j<column;j++)
            {
                if(matrix[i][j]==0)
                v.push_back({i,j});
            }
        }
        int len=v.size();
        int l=0;
        while(l<len)
        {
            for(int i=0;i<column;i++)
            {
                matrix[v[l][0]][i]=0;
            }
            for(int i=0;i<row;i++)
            {
                matrix[i][v[l][1]]=0;
            }
            l++;
        }
        for(int i=0;i<row;i++)
        {
            for(int j=0;j<column;j++)
            {
                cout<<matrix[i][j]<<" ";
            }
            cout<<endl;
        }
    }
};

int main() {
    Solution s;
    vector<vector<int>>matrix={{1,1,1},{1,0,1},{1,1,1}};
    s.setZeroes(matrix);
    return 0;
}
