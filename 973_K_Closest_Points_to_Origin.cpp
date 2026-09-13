#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        unordered_map<int,vector<int>>mp;
        vector<vector<int>>ans;
        for(int i=0;i<points.size();i++)
        {
            mp[points[i][0] * points[i][0] + points[i][1] * points[i][1]].push_back(i);
        }
        //based on the distance we are sorting the key's of the map
        vector<int>sorting;
        for(auto i:mp)
        {
            sorting.push_back(i.first);
        }
        sort(sorting.begin(),sorting.end());
        for(auto i:sorting)
        {
            vector<int>temp = mp[i];
            int count=0;
            while(count != temp.size() && ans.size() != k)
            ans.push_back(points[temp[count++]]);
            if(ans.size() == k)
            return ans;
        }
        return ans;
    }
};

int main() {
    Solution s;
    vector<vector<int>>points = {{1,3},{-2,2}};
    int k = 1;
    vector<vector<int>>ans;
    ans = s.kClosest(points,k);
    for(auto i:ans)
    {
        cout<<"{";
        for(auto j:i)
        cout<<j<<" ";

        cout<<"}"<<endl;
    }
    return 0;
}
