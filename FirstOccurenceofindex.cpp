#include <bits/stdc++.h>
using namespace std;
int main()
{
    int l2,l1;
    int i,j=0;
    string s1="sadbutsad",s2="sad";
    l1=s1.length();
    l2=s2.length();
    for(i=0;i<l1&&j<l2;i++)
    {
       if(s1[i]==s2[j])
       {
          j++;
       }else{
        i=i-j;
        j=0;
       }
       if(j==l2)
       {
         cout<<i-j+1;
       }
    }
}