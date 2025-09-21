#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>v ={-1,2,4,-6,7};
    int size=v.size();
    int count=0;
    for(int i=0;i<size;i++)
    {
        if(v[i]==0)
        {
            cout<<"0";
            break;
        }else if(v[i]<0)
        {
            count++;
        }
    }
    if(count%2==0)
    {
        cout<<"1";
    }else{
        cout<<"-1";
    }
}