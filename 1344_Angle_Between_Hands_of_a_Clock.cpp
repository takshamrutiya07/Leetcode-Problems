#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    double angleClock(int hour, int minutes) {
        double degreeHour=hour*30.0 + minutes*0.5;
        double degreeMinutes=minutes*6.0;
        return min(abs(degreeHour-degreeMinutes),360-abs(degreeHour-degreeMinutes));
    }
};
int main() {
    Solution s;
    int hour=3;
    int minutes=15;
    cout<<s.angleClock(hour,minutes);
    return 0;
}
