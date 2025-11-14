#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>n1={};
    vector<int>n2={1};
    int m=n1.size();
    int n=n2.size();
    int temp=0;
    n1.resize(m + n);
    for(int i=m;i<m+n;i++)
    {
        n1[i]=n2[i-m];
    }
    for(int i=0;i<(m+n)-1;i++)
    {
        for(int j=i+1;j<m+n;j++)
        {
            if(n1[i]>n1[j])
            {
                temp=n1[i];
                n1[i]=n1[j];
                n1[j]=temp;
            }
        }
    }
    
     for(int i=0;i<m+n;i++)
    {
        cout<<n1[i];
    }
}
