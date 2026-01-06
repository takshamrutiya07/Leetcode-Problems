#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> diStringMatch(string s) {
        int len=s.length();
        int low=0;
        int high=len;
        vector<int>ans;
        for(int i=0;i<len;i++)
        {
            if(s[i]=='I')
            {
               ans.push_back(low++);
            }else{
                ans.push_back(high--);
            }
        }
        ans.push_back(high);
        return ans;
    }
};

int main() {
    Solution s;
    string str="IDID";
    vector<int>ans;
    ans=s.diStringMatch(str);
    for(auto i:ans)
    {
        cout<<i<<" ";
    }
    return 0;
}
