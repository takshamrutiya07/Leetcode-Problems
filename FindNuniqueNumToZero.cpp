#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> sumZero(int n) {
    int i=1;
    vector<int>ans={};
    if(n%2 != 0)
    {
        ans.push_back(0);
    }
    while(ans.size()!=n)
    {
        ans.push_back(i);
        ans.push_back(-i);
        i++;
    }
        return ans; 
    }
};
int main() {
    Solution s;
    int n=5;
    int sum=0;
    vector<int>ans=s.sumZero(n);
    for(int i=0;i<ans.size();i++)
    {
        cout<<ans[i]<<" ";
        sum += ans[i];
    }
    cout<<endl;
    cout<<sum;
    return 0;
}
