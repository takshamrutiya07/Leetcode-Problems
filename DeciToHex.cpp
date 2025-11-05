#include<iostream>
using namespace std;
 string toHex(int num) {
    int n=0,i=0;
    char ch;
    string str;
    unsigned int unum = num;
    while(unum>=1)
    {
       n=unum%16;
       unum=unum/16;
       if(n>9)
       {
          ch='a'+(n-10);
       }else{
       ch = n+'0';
       }
       str = ch+str;
    }
    return str;
    }
int main()
{
    int num;
    cout<<"Enter a Number:";
    cin>>num;
    cout<<toHex(num);
}