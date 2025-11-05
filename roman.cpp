#include<iostream>
#include <bits/stdc++.h>
using namespace std;
int assign(char c)
{
    int value;
       switch(c){
        case 'I':{
            value=1;
            break;
        }
        case 'V':{
             value=5;
            break;
        }
        case 'X':{
             value=10;
            break;
        }
        case 'L':{
             value=50;
            break;
        }
        case 'C':{
            value=100;
            break;
        }
        case 'D':{
             value=500;
            break;
        }
        case 'M':{
            value=1000;
            break;
        }
        default : return 0;
    }
    return value;
}
int RomanToInt(string s)
{
    char ch;
    long sum=0;
    transform(s.begin(), s.end(),s.begin(),::toupper);
    for(int i=0;i<s.size();i++)
    {
        int value = assign(s[i]);
        int value2 = assign(s[i+1]);
        if(value>=value2)
        {
            sum = sum + value;
        }else{
            sum = sum + value2-value;
            i++;
        }
}
    return sum;
}
int main()
{
    string s;
    cout<<"Enter a string:";
    cin>>s;
    cout<<RomanToInt(s);
    return 0;
}