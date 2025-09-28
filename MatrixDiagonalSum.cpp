#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int size=mat.size();
        int sum=0;
        for(int i=0;i<size;i++)
        {
            sum += mat[i][i];
            sum += mat[i][size-i-1];
        }
        if(size%2!=0)
        {
            return sum - mat[size/2][size/2];
        }
        return sum;
    }
};
int main() {
    Solution s;
    vector<vector<int>>mat={{5}};
    cout<<s.diagonalSum(mat);
    return 0;
}
