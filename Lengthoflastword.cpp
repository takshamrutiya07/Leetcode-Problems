#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s="Hello worl d ";
    char c=' ';
    int count=0;
    int size=s.length();
    for(int i=size-1;i>=0;i--)
    {
        if(s[i]!=c)
        {
            count++;   
        }
        if(s[i]==c && count!=0)
        {
           break;
        } 
    }
    cout<<count;
}