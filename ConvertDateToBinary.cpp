#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string binary(int n)
    {
        string str="";
        while(n>0)
        {
            if(n%2==0)
            str += '0';
            else
            str += '1';

            n /= 2;
        }
        return str;
    }
    string convertDateToBinary(string date) {
        int year=stoi(date.substr(0,4));
        int month=stoi(date.substr(5,7));
        int day=stoi(date.substr(8,10));
        string bi1=binary(year);
        string bi2=binary(month);
        string bi3=binary(day);
        reverse(bi1.begin(),bi1.end());
        reverse(bi2.begin(),bi2.end());
        reverse(bi3.begin(),bi3.end());

        string ans=bi1+'-'+bi2+'-'+bi3;
        return ans;
    }
};
int main() {
    Solution s;
    string str="2006-06-07";
    cout<<s.convertDateToBinary(str);
    return 0;
}
