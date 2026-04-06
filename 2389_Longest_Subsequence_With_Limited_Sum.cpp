#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> answerQueries(vector<int>& nums, vector<int>& queries) {
         sort(nums.begin(),nums.end());
        int n=nums.size();
        vector<int>v(n);
        vector<int>ans(queries.size(),0);
        v[0]=nums[0];
        for(int i=1;i<n;i++)
        {
            v[i] = nums[i]+v[i-1];
        }
        for(int i=0;i<queries.size();i++)
        {
            for(int j=0;j<v.size();j++)
            {
                if(queries[i]>=v[j])
                {
                    ans[i]=j+1;
                }
            }
        }
        return ans;
    }
};

int main() {
    Solution s;
    vector<int>v={4,5,2,1};
    vector<int>q={3,10,21};
    vector<int>ans;
    ans=s.answerQueries(v,q);
    for(auto i:ans)
    {
        cout<<i<<" ";
    }
    return 0;
}
