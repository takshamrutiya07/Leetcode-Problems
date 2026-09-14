#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> partitionLabels(string s) {
        vector<int>last(26,-1);
        vector<int>ans;
        for(int i=0;i<s.length();i++)
        {
            last[s[i]-'a'] = i;
        }
        int maxi = 0;
        int temp = 0;
        for(int i=0;i<s.length();i++)
        {
            maxi = max(maxi,last[s[i]-'a']);
            if(i==maxi)
            {
                ans.push_back((maxi+1)-temp);
                temp = i+1;
            }
        }
        return ans;
    }
};
int main() {
    Solution s;
    string str = "caedbdedda";
    vector<int>ans;
    ans = s.partitionLabels(str);
    for(auto i:ans)
    {
        cout<<i<<" ";
    }
    return 0;
}
