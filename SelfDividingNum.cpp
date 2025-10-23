#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
     vector<int> selfDividingNumbers(int left, int right) {
        vector<int>ans={};
        int temp;
        while(left<=right)
        {
            temp=left;
            bool valid=true;
            while(temp>0)
            {
                int digit=temp%10;
                if(digit==0 || left%digit !=0 )
                {
                    valid=false;
                    break;
                }
                temp /= 10;
            }
            if(valid)
            ans.push_back(left);

            left++;
        }
        return ans;
    }
};
int main() {
    Solution s;
    int left=1;
    int right=22;
    vector<int>ans=s.selfDividingNumbers(left,right);
    for(int i=0;i<ans.size();i++)
    {
        cout<<ans[i]<<" ";
    }
    return 0;
}
