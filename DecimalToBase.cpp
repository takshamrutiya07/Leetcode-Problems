#include <bits/stdc++.h>
using namespace std;
// vector<char> DecToBase(int b,int N)
// {
//     int n;
//     char ch;
//     vector<char> v;
//     while(N>=1)
//     {
//        n=N%b;
//        N=N/b;
//        if(n>9)
//        {
//           ch=n+7+'0';
//        }else{
//        ch = n+'0';
//        }
//        v.push_back(ch);
//     }
//     return v;
// }
string DecToBase(int b,int N)
{
    int n;
    char ch;
    string str;
    vector<char> v;
    while(N>=1)
    {
       n=N%b;
       N=N/b;
       if(n>9)
       {
          ch=n+7+'0';
       }else{
       ch = n+'0';
       }
       str=ch+str;
    }
    return str;
}
int main()
{
    int b,N;
    string m;
    cout<<"Enter the base value and a number:";
    cin>>b>>N;
    m=DecToBase(b,N);
    cout<<m;
    return 0;
}
