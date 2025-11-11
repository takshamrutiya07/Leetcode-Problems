#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
     vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
        sort(arr.begin(), arr.end());
        int n = arr.size();
        int diff = INT_MAX;
        for (int i = 1; i < n; i++) {
            diff = min(diff, arr[i] - arr[i - 1]);
        }
        vector<vector<int>> ans;
        for (int i = 1; i < n; i++) {
            if (arr[i] - arr[i - 1] == diff) {
                ans.push_back({arr[i - 1], arr[i]});
            }
        }
        return ans;
    }
};
int main() {
    Solution s;
    vector<int>v={1,2,3};
    vector<vector<int>>ans;
    ans=s.minimumAbsDifference(v);
    cout<<"{";
    for(int i=0;i<ans.size();i++)
    {
        cout<<"{"<<ans[i][0]<<","<<ans[i][1]<<"}"<<",";
    }
    cout<<"}";
    return 0;
}
