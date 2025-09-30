#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>p={7,1,5,3,6,4};
    int maxi=0,mini=INT_MAX;
    int size=p.size();
    // for(int i=0;i<size;i++)
    // {
    //     mini=min(p[i],mini);
    //     maxi=max(maxi,p[i]-mini);
    // }
    //whenever we don't want to play with the indexes that time this ranged based loop is useful
    for(auto b:p)
    {
         mini=min(b,mini);
         maxi=max(maxi,b-mini);
    }
    cout<<maxi; 
}