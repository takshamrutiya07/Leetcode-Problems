#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    string fre(int size,char ch)
    {
        string str="";
        for(int i=0;i<size;i++)
        {
            str += ch;
        }
        return str;
    }
    string frequencySort(string s) {
        vector<int>v(75,0);
        vector<int>index(75);
        string str="";
        string temp="";
        int n1=0;
        int n2=0;
        for(int i=0;i<75;i++)
        {
            index[i]=i;
        }
        int len = s.length();
        for(char c:s)
        {
            v[c-'0']++;
        }
        for(int i=0;i<74;i++)
        {
            for(int j=0;j<74-i;j++)
            {
                if(v[j]<v[j+1])
                {
                    swap(v[j],v[j+1]);
                    swap(index[j],index[j+1]);
                }
            }
        }
        int i=0;
        while(v[i]!=0)
        {
            str=fre(v[i],(char)index[i]+'0');
            temp += str;
            i++;
        }
        cout<<temp;
    }
};
int main() {
    Solution s;
    s.frequencySort("000aaaaaaaabb");
    return 0;
}
