#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int splitNum(int num) {
        vector<int>ans;
        while(num>0)
        {
            ans.push_back(num%10);
            num /= 10;
        }
        sort(ans.begin(),ans.end());
        int n1=0;
        int n2=0;
        for(int i=0;i<ans.size();i++)
        {
            if(i%2==0)
            {
                n1 = ans[i] + n1*10;
            }else{
                n2 = ans[i] + n2*10;
            }
        }
        return n1+n2;
    }
};
int main() {
    Solution s;
    int num=11213;
    cout<<s.splitNum(num);
    return 0;
}
