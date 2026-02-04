#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
        int n=indices.size();
        string str="";
        vector<char>v(n,'a');
        for(int i=0;i<n;i++)
        {
            v[indices[i]]=s[i];
        }
        for(auto i:v)
        {
            str += i;
        }
        return str;
    }
};
int main() {
    Solution s;
    string str="codeleet";
    vector<int>v={4,5,6,7,0,2,1,3};
    cout<<s.restoreString(str,v);
    return 0;
}
