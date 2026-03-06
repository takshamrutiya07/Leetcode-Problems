#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minSteps(string s, string t) {
        int n=s.length();
        int count=0;
        vector<int>s1(26,0);
        vector<int>t1(26,0);
        for(auto i:s)
        {
            s1[i-'a']++;
        }
        for(auto i:t)
        {
            t1[i-'a']++;
        }
        for(int i=0;i<26;i++)
        {
            int diff=s1[i]-t1[i];
            if(diff<0)
            {
                diff *= -1;
                count += diff;
            }
        }
        return count;
    }
};
int main() {
    Solution s;
    string s1="bab";
    string s2="aba";
    cout<<s.minSteps(s1,s2);
    return 0;
}
