#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int kthLargestValue(vector<vector<int>>& matrix, int k) {
        int row = matrix.size();
        int col = matrix[0].size();
        vector<vector<int>>ans(row,vector<int>(col,0));
        vector<int>xorvalues;
        for(int i=0;i<row;i++)
        {
            for(int j=0;j<col;j++)
            {
                ans[i][j] = matrix[i][j];
                if(i>0)
                ans[i][j] ^= ans[i-1][j];

                if(j>0)
                ans[i][j] ^= ans[i][j-1];

                if(i>0 && j>0)
                ans[i][j] ^= ans[i-1][j-1];
                xorvalues.push_back(ans[i][j]);
            }
        }
        sort(xorvalues.begin(),xorvalues.end());
        return xorvalues[(row * col)-k];
    }
};

int main() {
    Solution s;
    vector<vector<int>>v = {{5,2},{1,6}};
    int k = 1;
    cout<<s.kthLargestValue(v,k);
    return 0;
}
