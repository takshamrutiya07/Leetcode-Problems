#include<iostream>
#include<math.h>
using namespace std;
int binaryTodecimal(string s)
{
    int dec=0;
    int count=0;
     for(int i=s.size()-1;i>=0;i--)
    {
        if(s[i]=='1')
        {
        dec=dec+pow(2,count);
        count++;
        }else{
            count++;
        }
    }
    return dec;
}
string DecToBase(int N)
{
    int n;
    char ch;
    string str;
    if(N==0)
    {
        return "0";
    }
    while(N>=1)
    {
       n=N%2;
       N=N/2;
       ch = n+'0';
       str=ch+str;
    }
    return str;
}
int main()
{
    string s1;
    string s2;
    cout<<"Enter two binary numbers:";
    cin>>s1>>s2;
    int n1=binaryTodecimal(s1);
    int n2=binaryTodecimal(s2);
    string add = DecToBase(n1+n2);
    cout<<add;
    
}