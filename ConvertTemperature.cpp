#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<double> convertTemperature(double celsius) {
        vector<double>ans(0,2);
        double kel=celsius+273.15;
        double fah=celsius*1.80 + 32.00;
        ans.push_back(kel);
        ans.push_back(fah);
        return ans;
    }
};

int main() {
    Solution s;
    double tem=36.50;
    vector<double>v;
    v=s.convertTemperature(tem);
    for(double i:v)
    {
        cout<<i<<"\n";
    }
    return 0;
}
