#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
/* Logic:   case 1:    low is even number and high is even number
                       ex:2,10
                       odd numbers:3,5,7,9
                       formula:(high-low)/2 = (10-2)/2 = 4

            case 2:    low is odd number and high is odd number
                       ex:3,11
                       odd numbers:3,5,7,9,11
                       formula:(high-low)/2 + 1 = (11-3)/2 +1 = 5

            case 3:    low is even number and high is odd number
                       ex:2,11
                       odd numbers:3,5,7,9,11
                       formula:(high-low)/2 + 1 = (11-2)/2 +1 = 5
                       
            case 4:    low is odd number and high is even number
                       ex:3,10
                       odd numbers:3,5,7,9
                       formula:(high-low)/2 + 1 = (10-3)/2 +1 = 4
 */
    int countOdds(int low, int high) {
        if((low%2==0 && high%2==0))
        {
            return (high-low)/2;
        }
        return (high-low)/2 + 1;
    }
};

int main() {
    Solution s;
    cout<<s.countOdds(3,11);
    return 0;
}
