#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
     vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int row=matrix.size();
        int column=matrix[0].size();
        vector<int>ans;
        int top=0;
        int bottom=row-1;
        int right=column-1;
        int left=0;
         while (top <= bottom && left <= right) {

            for (int j = left; j <= right; j++) {
                ans.push_back(matrix[top][j]);
            }
            top++;//visited that row

            for (int i = top; i <= bottom; i++) {
                ans.push_back(matrix[i][right]);
            }
            right--;//visited that column

            if (top <= bottom) {
                for (int j = right; j >= left; j--) {
                    ans.push_back(matrix[bottom][j]);
                }
                bottom--;//visited that row
            }

            if (left <= right) {
                for (int i = bottom; i >= top; i--) {
                    ans.push_back(matrix[i][left]);
                }
                left++;//visited that column
            }
        }
        return ans;  
    }
};
int main() {
    Solution s;
    vector<vector<int>> matrix={{1,2,3},{4,5,6},{7,8,9}};
    vector<int>ans;
    ans=s.spiralOrder(matrix);
    for(auto i:ans)
    {
        cout<<i<<" ";
    }
    return 0;
}
