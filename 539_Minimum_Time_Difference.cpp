#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int findMinDifference(vector<string>& timePoints) {
        vector<int>mins;
        for(auto i:timePoints)
        {
            int h = stoi(i.substr(0,2));
            int m = stoi(i.substr(3,2));
            mins.push_back((h*60)+m);
        }
        sort(mins.begin(),mins.end());
        int mini = INT_MAX;
        for(int i=1;i<mins.size();i++)
        {
            mini = min(mini,mins[i]-mins[i-1]);
        }
        mini = min(mini, (1440 - mins.back()) + mins[0]);
        return mini;
    }
};

int main() {
    Solution s;
    vector<string>points = {"23:59","00:00"};
    cout<<s.findMinDifference(points);
    return 0;
}
