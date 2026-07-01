#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maximumElementAfterDecrementingAndRearranging(vector<int>& arr) {
        sort(arr.begin(),arr.end());
        arr[0]=1;
        int n=arr.size();
        for(int i=1;i<arr.size();i++)
        {
            if(!abs(arr[i]-arr[i-1]<=1))
            arr[i]=arr[i-1]+1;
        }
        return arr[n-1];
    }
};
int main() {
    Solution s;
    vector<int>v={2,2,1,2,1};
    cout<<s.maximumElementAfterDecrementingAndRearranging(v);
    return 0;
}
