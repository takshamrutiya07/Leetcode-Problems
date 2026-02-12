#include<iostream>
using namespace std;
int main()
{
    string s ="456328";
    int size = s.length();
    int max=0;
    int n=0;
    for(int i=0,j=size-1;i<=size/2;i++,j--)
    {
        n=s[i]-'0';
        if(n>max && (n%2) != 0)
        {
            max = n;
        }
        n=s[j]-'0';
        if(n>max && (n%2) != 0)
        {
            max = n;
        }
    }
    cout<<max;
}

// class Solution {
// public:
//     string largestOddNumber(string s) {
//     int size = s.length();
//     int max=stoi(s);
//     string num ="";
//     if(max %2 != 0)
//     {
//         return s;
//     }
//     int n=0;
//     max=0;
//     for(int i=0,j=size-1;i<=size/2;i++,j--)
//     {
//         n=s[i]-'0';
//         if(n>max && (n%2) != 0)
//         {
//             num = s[i];
//         }
//         n=s[j]-'0';
//         if(n>max && (n%2) != 0)
//         {
//             num = s[j];
//         }
//     }
//     return num;
//     }
// };