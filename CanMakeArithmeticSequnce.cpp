#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>v={1,2,3};
    int size=v.size();
    int diff=0,count;
    sort(v.begin(),v.end());
    for(int i=0;i<size-1;i++)
    {
        if(diff != v[i+1]-v[i] && i!=0)
        {
            cout<<"False";
            break;
        }
        diff=v[i+1]-v[i];
    }
    cout<<"Yup";
}