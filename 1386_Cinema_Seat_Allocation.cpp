#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxNumberOfFamilies(int n, vector<vector<int>>& reservedSeats) {
        unordered_map<int,int>mp;
        for(auto i:reservedSeats)
        {
            int row = i[0];
            int seat = i[1];

            mp[row] |= (1<<seat);//by doing or operation we are checking which seats are booked in that row. ex : 000010100 means 2nd and 4th seats are booked.
        }
        int ans = (n - mp.size())*2;

        int maskA = (1<<2) | (1<<3) | (1<<4) | (1<<5);
        int maskB = (1<<4) | (1<<5) | (1<<6) | (1<<7);
        int maskC = (1<<6) | (1<<7) | (1<<8) | (1<<9);

        for(auto i : mp)
        {
            bool groupA = (i.second & maskA) == 0;
            bool groupB = (i.second & maskB) == 0;
            bool groupC = (i.second & maskC) == 0;

            if(groupA && groupC)
            ans += 2;
            else if(groupA || groupB || groupC)
            ans++;
        }
        return ans;
    }
};

int main() {
    Solution s;
    int n=3;
    vector<vector<int>>v={{1,2},{1,3},{1,8},{2,6},{3,1},{3,10}};
    cout<<s.maxNumberOfFamilies(n,v);
    return 0;
}
