#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> sequentialDigits(int low, int high) {
        vector<int>v={12,123,1234,12345,123456,1234567,12345678,123456789};
        vector<int>plus={11,111,1111,11111,111111,1111111,11111111,111111111};
        vector<int>ans;
        int lowdigit=floor(log10(low))+1;
        int highdigit=floor(log10(high))+1;
        for(int i=lowdigit;i<= min(highdigit, 9);i++)
        {
            int num=v[i-2];
            while(true)
            {
                if(num>high)break;

                if(num>=low)
                ans.push_back(num);

                if(num%10 == 9)break;

                num += plus[i-2];
            }
        }      
        return ans;
    }
};
int main() {
    Solution s;
    int l=100;
    int h=300;
    vector<int>ans;
    ans=s.sequentialDigits(l,h);
    for(auto i:ans)
    {
        cout<<i<<" ";
    }
    return 0;
}
