#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool checkOverlap(int radius, int xCenter, int yCenter, int x1, int y1, int x2, int y2) {
    int colsestx = max(x1, min(xCenter, x2));
    int closesty = max(y1, min(yCenter, y2));

    // x1     xCenter     x2
    // ---------------------   keep colsestx = xCenter

    //x1       x2      xCenter
    // ---------------------   keep closestx = x2

    //xCenetr     x1     x2
    // ---------------------   keep closestx = x1 

    int dx = xCenter - colsestx;
    int dy = yCenter - closesty;

    return (dx*dx + dy*dy) <= (radius*radius);
    }
};
int main() {
    Solution s;
    int radius = 1;
    int xCenter = 1;
    int yCenter = 1;
    int x1 = 1;
    int y1 = -3;
    int x2 = 2;
    int y2 = -1;
    cout<<s.checkOverlap(radius,xCenter,yCenter,x1,y1,x2,y2);
    return 0;
}

