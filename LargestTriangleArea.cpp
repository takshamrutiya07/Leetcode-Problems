#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    double largestTriangleArea(vector<vector<int>>& points) {
        double area = 0.0;
        int n = points.size();
        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                for (int k = j + 1; k < n; k++) {
                    double temp = 0.5 * abs(
                        points[i][0] * (points[j][1] - points[k][1]) +
                        points[j][0] * (points[k][1] - points[i][1]) +
                        points[k][0] * (points[i][1] - points[j][1])
                    );
                    area = max(area, temp);
                }
            }
        }
        return area;
    }
};
int main() {
    Solution s;
    vector<vector<int>>points={{0,0},{0,1},{1,0},{0,2},{-3,0}};
    cout<<s.largestTriangleArea(points);
    return 0;
}
/*area= 0.5 * |x1  y1  1|
              |x2  y2  1|
              |x3  y3  1|

          area  =  0.5 ∗ ∣x1​(y2​−y3​)+x2​(y3​−y1​)+x3​(y1​−y2​)∣
*/            
             
