#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s1="anagram";
    string s2="nagaram";
    vector<int> v1(26,0),v2(26,0);
    if(s1.length() != s2.length())
    {
        cout<<"Not";
        return 0;
    }
    for(int i=0;i<s1.length();i++)
    {
        v1[s1[i]-'a']++;
        v2[s2[i]-'a']++;
    }
    if(v1==v2)
    {
        cout<<"true";
        return 1;
    }
    return 0;
}