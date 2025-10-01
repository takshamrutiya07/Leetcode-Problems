#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    double average(vector<int>& salary) {
        int size=salary.size();
        int mini=salary[0];
        int maxi=salary[0];
        double sum=salary[0];
        double avg=0;
        for(int i=1;i<size;i++)
        {
            sum += salary[i];
            mini=min(mini,salary[i]);
            maxi=max(maxi,salary[i]); 
        }
        return double(sum-mini-maxi)/(size-2);
    }
};
int main() {
    Solution s;
    vector<int>salary={8000,9000,2000,3000,6000,1000};
    cout<<s.average(salary);
    return 0;
}
