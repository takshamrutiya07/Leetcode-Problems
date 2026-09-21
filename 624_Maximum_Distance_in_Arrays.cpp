#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxDistance(vector<vector<int>>& arrays) {
        int n = arrays.size();
        int mini = arrays[0][0];
        int maxi = arrays[0].back();
        int ans = 0;
        for(int i=1;i<n;i++) {
            int first = arrays[i][0];
            int last = arrays[i].back();

            ans = max(ans, abs(last - mini));
            ans = max(ans, abs(maxi - first));

            mini = min(mini, first);
            maxi = max(maxi, last);
        }
        return ans;
    }
};

int main() {
    Solution s;
    vector<vector<int>>arr={{1,5},{3,4}};
    cout<<s.maxDistance(arr);
    return 0;
}
