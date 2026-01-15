#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    string maximumOddBinaryNumber(string s) {
        int n=s.length();
        int count=0;
        string ans="";
        for(int i=0;i<n;i++)
        {
            if(s[i]=='1') count++;
        }
        int temp=count;
        for(int i=0;i<n;i++)
        {
            if(count>0)
            {
                ans += '1';
                count--;
            }else{
                ans += '0';
            }
        }
        if(temp>0)
        {
            ans[temp-1]='0';
            ans[n-1]='1';
        }
        return ans;
    }
};
int main() {
    Solution s;
    string str = "0110";
    cout<<s.maximumOddBinaryNumber(str);
    return 0;
}
