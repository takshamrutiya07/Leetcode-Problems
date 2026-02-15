#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<string> buildArray(vector<int>& target, int n) {
        int size=target.size();
        vector<string>ans;
        int j=0;
        for(int i=1;i<=n && j<size;i++)
        {
            ans.push_back("Push");
            if(target[j]==i)
            {
                j++;
            }
            else
            {
                ans.push_back("Pop");
            }    
        }
        return ans;
    }
};
int main() {
    Solution s;
    vector<int>target={1,3};
    int n=4;
    vector<string>ans;
    ans=s.buildArray(target,n);
    for(auto i:ans)
    {
        cout<<i<<" ";
    }
    return 0;
}
