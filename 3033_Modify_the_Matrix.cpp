#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> modifiedMatrix(vector<vector<int>>& matrix) {
        int row = matrix.size();
        int column = matrix[0].size();
        for(int i=0;i<column;i++)
        {
            int maxi = INT_MIN;
            vector<int>place;
            for(int j=0;j<row;j++)
            {
                if(matrix[j][i]==-1)
                place.push_back(j);
                maxi = max(maxi,matrix[j][i]);
            }
            if(place.size() != 0)
            {
                for(auto x:place)
                matrix[x][i] = maxi;
            }
            place.clear();   
        }
        return matrix;
    }
};

int main() {
    Solution s;
    vector<vector<int>>v={{-1,0,0,2,2},{2,0,0,2,1},{4,3,2,1,1},{-1,-1,0,2,4},{1,0,3,-1,0}};
    vector<vector<int>>ans;
    ans=s.modifiedMatrix(v);
    int row = v.size();
    int column = v[0].size();
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<column;j++)
        {
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
