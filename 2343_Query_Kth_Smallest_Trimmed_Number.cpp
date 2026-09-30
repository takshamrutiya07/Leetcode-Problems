#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> smallestTrimmedNumbers(vector<string>& nums, vector<vector<int>>& queries) {
        vector<int>ans;
        int len = nums.size();
        for(int i=0;i<queries.size();i++)
        {
            int k = queries[i][0];
            int n = queries[i][1];
            vector<pair<string,int>>temp(len);
            int size = nums[0].size();
            for(int j=0;j<nums.size();j++)
            {
                string str = nums[j].substr(size-n,n);
                temp[j].first = str;
                temp[j].second = j;
            }
            sort(temp.begin(),temp.end(),[](pair<string,int>& a,pair<string,int>& b){
                if(a.first == b.first)
                return a.second < b.second;
                return a.first < b.first;
            });
            ans.push_back(temp[k-1].second);
            temp.clear();
        }
        return ans;
    }
};

int main() {
    Solution s;
    vector<string>nums = {"102","473","251","814"};
    vector<vector<int>> queries={{1,1},{2,3},{4,2},{1,2}};
    vector<int>ans;
    ans = s.smallestTrimmedNumbers(nums,queries);
    for(auto i:ans)
    {
        cout<<i<<" ";
    }
    return 0;
}
