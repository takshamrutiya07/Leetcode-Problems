#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the number:";
    cin>>n;
    if(n<=0)
    {
        cout<<"Nop";
    }
    int p=log2(n);//logbn=p <==>b^p==n    where b=base
    if(n==pow(2,p))//this line represents the b(2)^p==n
    {
        cout<<"Yup";
    }else{
        cout<<"Nop";
    }
    
}