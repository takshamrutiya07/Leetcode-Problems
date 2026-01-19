#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    double trimMean(vector<int>& arr) {
       sort(arr.begin(),arr.end());
       double mean=0;
       long long sum=0;
       int n=arr.size();
       int per=n*0.05;
       for(int i=per;i<n-per;i++)
       {
           sum += arr[i];
       }
       mean=sum/(n-per*2.0);
       return mean;
    }
};
int main() {
    Solution s;
    vector<int>v={6,0,7,0,7,5,7,8,3,4,0,7,8,1,6,8,1,1,2,4,8,1,9,5,4,3,8,5,10,8,6,6,1,0,6,10,8,2,3,4};
    cout<<s.trimMean(v);
    return 0;
}
