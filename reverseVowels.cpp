#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s="IceCreAm";
    int size=s.length();
    vector<int>v;
    // char temp;
    for(int i=0;i<size;i++)
    {
        if(s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U' ||
           s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u')
        {
            v.push_back(i);
        }
    }
    int si=v.size();
    for(int i=0;i<si/2;i++)
    {
        // temp=s[v[i]];
        swap(s[v[i]],s[v[si-1-i]]);
        // s[v[si-1-i]]=temp;
    }
    cout<<s;
}