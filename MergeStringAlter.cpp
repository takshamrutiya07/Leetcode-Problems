#include<iostream>
using namespace std;
int main()
{
    string s1="abc";
    string s2="pqr";
    string ans="";
    int l1=s1.length();
    int l2=s2.length();
    int i=0,index1=0,index2=0;
    while(i<(l1*2) && (i<l2*2))
    {
        if(i%2==0)
        {
            ans += s1[index1];
            index1++;
        }else{
            ans += s2[index2];
            index2++;
        }
        i++;
    }
    if(l1>l2)
    {
        ans += s1.substr(index1,l1);
    }else{
        ans += s2.substr(index2,l2);
    }
    cout<<ans;
}