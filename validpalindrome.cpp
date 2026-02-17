/*Imagine s has 100,000 characters.
Using n = s[i] + n:
You create a new string and copy all the existing characters for each character.
Total cost: about 100,000² = 10 billion operations
Using n += s[i]:
You just add a new character at the end.
Cost: about 100,000 operations
*/

#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s="pwp";
    int size=s.size();
    string n="";
    // n.resize(size);
    transform(s.begin(), s.end(), s.begin(),::tolower);
    for(int i=0;i<size;i++)
    {
        if(s[i]>=97 && s[i]<=122)
        {
            n+=s[i];
            //n=n+s[i];never use this type of syntex
        }
    }
    size=n.size();
    bool flag=true;
    for(int i=0;i<size/2;i++)
    {
        if(n[i]!=n[size-i-1])
        {
            flag=false;
            // return false;
        }
    }
    if(size==1 || size==0)
    {
        cout<<true;
    }else
    cout<<flag;
}