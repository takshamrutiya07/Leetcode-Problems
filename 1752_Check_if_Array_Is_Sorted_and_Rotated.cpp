#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool check(vector<int>& nums) {
       int n = nums.size();
        int cnt = 0;

        for (int i = 0; i < n; i++) {
            if (nums[i] > nums[(i + 1) % n])
                cnt++;
        }

        return cnt <= 1;
    }
};

int main() {
    Solution s;
    vector<int>v={3,4,5,1,2};
    cout<<s.check(v);
    return 0;
}
