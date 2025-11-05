#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    vector<string>str={"flower","flow","flight"};
    int min = str[0].length(); 

    for (int i = 1; i < str.size(); i++) {
        if (str[i].length() < min) {
            min = str[i].length();
        }
    }
    for(int i=0;i<min;i++)
    {
        int count=0;
        for(int j=0;j<str.size()-1;j++)
        {
            if(str[j][i]==str[j+1][i])
            {
                count++;
            }
        }
        if(count==str.size()-1)
        {
            s=s+str[0][i]; 
        }else{
            break;
        }  
    }
     cout<<s;   
     return 0;
}



