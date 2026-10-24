#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int largestValsFromLabels(vector<int>& val, vector<int>& lab, int wan, int lim) {
        int n = val.size();
        vector<pair<int,int>>v(n);
        for(int i=0;i<n;i++)
        {
            v.push_back({val[i],lab[i]});
        }
        sort(v.rbegin(),v.rend());
        unordered_map<int,int>mp;
        int sum = 0;
        for(int i=0;i<n;i++)
        {
            if(wan == 0)return sum;
            int first = v[i].first;
            int sec = v[i].second;
            if(mp[sec]<lim)
            {
                sum += first;
                mp[sec]++;
                wan--;
            }
        }
        return sum;
    }
};

int main() {
    Solution s;
    vector<int>val={5,4,3,2,1};
    vector<int>lab={1,1,2,2,3};
    int lim = 1;
    int wan = 3;
    cout<<s.largestValsFromLabels(val,lab,wan,lim);
    return 0;
}
