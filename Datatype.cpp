#include<iostream>
#include <cctype>
#include<algorithm>
#include<string.h>
using namespace std;
int datatype(string s)
{
    if(s.length()==1 && !isdigit(s[0]))
    {
        return sizeof(char);
    }
    int f=s.find('.');
    if(s.length()-f-1<5)
    {
        return sizeof(float);
    }else{
        return sizeof(double);
    }
    if(all_of(s.begin(), s.end(),::isdigit))
    {
        return sizeof(int);
    }
    
}
int main()
{
    string s;
    cout<<"Enter a string:";
    cin>>s;
    int c=datatype(s);
    cout<<c;

}