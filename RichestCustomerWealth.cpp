#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int maxi=0;
        int count=0,sum=0;
        int size1=accounts.size();
        int size2=accounts[0].size();
        read:
        sum=0;
        for(int i=0;i<accounts[count].size();i++)
        {
            sum += accounts[count][i];
            cout<<count<<" "<<sum<<endl;
        }
        maxi=max(maxi,sum);
        if(count < size1-1)
        {
            cout<<"returned"<<endl;
            count++;
            goto read;
        }
        // for(int i=0;i<size1;i++){
        //     sum = 0;
        //     for(int j=0;j<accounts[i].size();j++){
        //         sum += accounts[i][j];
        //     }
        //     maxi = max(sum,maxi);
        // }
        return maxi;
    }
};
int main() {
    Solution s;
    vector<vector<int>> accounts = {{2,8,7},{7,1,3},{1,9,5}};
    cout<<s.maximumWealth(accounts);
    return 0;
}
