#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> findThePrefixCommonArray(vector<int>& A, vector<int>& B) {
        int n=A.size();
        vector<int>ele(n+1,0);
        vector<int>ans;
        int common=0;
        for(int i=0;i<n;i++)
        {
            ele[A[i]]++;
            if(ele[A[i]]==2)
            {
                common++;
            }
            ele[B[i]]++;
            if(ele[B[i]]==2)
            {
                common++;
            }
            ans.push_back(common);
        }
        return ans;
    }
};
int main() {
    Solution s;
    vector<int>a={1,3,2,4};
    vector<int>b={3,1,2,4};
    return 0;
}
