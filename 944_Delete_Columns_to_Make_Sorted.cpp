#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int minDeletionSize(vector<string>& strs) {
        int n=strs.size();
        int count=0;
        for(int i=0;i<n;i++)
        {
            for(int j=1;j<strs[i].size();j++)
            {
                if(strs[j-1][i]>strs[j][i])
                {
                    count++;
                    break;
                }
            }
        }
        return count;
    }
};

int main() {
    Solution s;
    vector<string>str={"abc", "bce", "cae"};
    cout<<s.minDeletionSize(str);
    return 0;
}
