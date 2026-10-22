#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    long long maxMatrixSum(vector<vector<int>>& matrix) {
        long long sum = 0;
        int negativeCount = 0;
        int minAbs = INT_MAX;
        for (int i = 0; i < matrix.size(); i++) {
            for (int j = 0; j < matrix[i].size(); j++) {
                int x = matrix[i][j];

                if (x < 0) {
                    negativeCount++;
                }
                int absoluteValue = abs(x);

                sum += absoluteValue;
                minAbs = min(minAbs, absoluteValue);
            }
        }

        if (negativeCount % 2 == 0) {
            return sum;
        }
        return sum - 2LL * minAbs;
    }
};

int main() {
    Solution s;
    vector<vector<int>>matrix={{-1,-1},{1,1}};
    cout<<s.maxMatrixSum(matrix);
    return 0;
}
