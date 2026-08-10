#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        int top=0;
        int left=0;
        int right=n-1;
        int bottom=n-1;
        vector<vector<int>> ans(n, vector<int>(n, 0));
        int count=1;
        while(top<=bottom && left<=right)
        {
            for(int i=left;i<=right;i++)
            {
                ans[top][i]=count++;
            }
            top++;

            for(int i=top;i<=bottom;i++)
            {
                ans[i][right]=count++;
            }
            right--;

            for (int j = right; j >= left; j--) {
                ans[bottom][j]=count++;
            }
            bottom--;
            
            for (int i = bottom; i >= top; i--) {
                ans[i][left] = count++;
            }
            left++;
        }
        return ans;
    }
};

int main() {
    Solution s;
    int n = 4;
    vector<vector<int>>v;
    v=s.generateMatrix(n);
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
