#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minimumPushes(string word) {
        vector<int>v(26,0);
        int count=0;
        for(auto i:word)
        {
           v[i-'a']++;
        }
        sort(v.begin(), v.end(), greater<int>());
        for(int i=0;i<26;i++)
        {
            if(v[i]==0) break;
            count += v[i] * (i/8 + 1);
        }
        return count;
    }
};
int main() {
    Solution s;
    string str="abcde";
    cout<<s.minimumPushes(str);
    return 0;
}
