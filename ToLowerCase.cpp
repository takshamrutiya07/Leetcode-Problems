#include<iostream>
using namespace std;
int main()
{
    string s="Taksh";
     int size=s.length();
        if(size==0)
        {
            cout <<"Empty";
        }
        for(int i=0;i<size;i++)
        {
            if(s[i]>='A' && s[i]<='Z')
            {
               s[i] += 32;
            }
        }
        cout<<s;
}