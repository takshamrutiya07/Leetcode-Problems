#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int nums(string sub,char ch)
    {
        int len=sub.length();
        long long num=0;
        int i=0;
        while(i<len)
        {
            num = num * 10 + (sub[i]-'0');
            if(num>INT_MAX)
            {
                if(ch=='-')return INT_MIN;
                return INT_MAX;
            }
            i++;
        }
        if(ch=='-')
            return int(num *= (-1));
        return int(num);
    }
    int myAtoi(string s) {
        int i=0;
        string sub="";
        char ch=' ';
        bool flag=false;
        while(i < s.length())
        {
            if(s[i]!=' ' && (s[i]=='+' || s[i]=='-') && (i!=0 && isdigit(s[i-1])))
            {
                break;
            }
            else if(s[i]!=' ' && (s[i]=='+' || s[i]=='-') && !flag)
            {
                ch = s[i];
                flag=true;
                if (i + 1 >= s.length() || !isdigit(s[i + 1])) {
                return 0;
            }
            }
            else if(s[i]!=' ' && isdigit(s[i]))
            {
                sub += s[i];
            }
            else if((!isdigit(s[i]) && s[i] != ' ') || (s[i]==' ' && sub!=""))
            {
                break;
            }
            i++;
        }
        return nums(sub,ch);
    }
};
int main() {
    Solution s;
    string str="  +  413";
    cout<<s.myAtoi(str)<<"\n";
    return 0;
}
// int myAtoi(string s) {
        
//         int i=0 ;
//        int n=s.size();
//         while(i<n && s[i]==' '){
//             i++;
//         }
//         int sign=1;
//         if(i<n && (s[i]=='+'||s[i]=='-')){
//             if(s[i]=='-')
        
//         sign=-1;
//         i++;}
//         long result=0;
//         while(i<n&& isdigit(s[i])){
//         result=result*10+(s[i]-'0');

        
//         if(sign*result>=INT_MAX)return INT_MAX;
//         if(sign*result<=INT_MIN)return INT_MIN;
//         i++;}
//         return (int)(result*sign);
// }
        