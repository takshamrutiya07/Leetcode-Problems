#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        string s1="";
        string s2="";
        for(auto x:word1)
        {
            s1 += x;
        }
        for(auto x:word2)
        {
            s2 += x;
        }
        return s1==s2;
    }
};
int main() {
    Solution s;
    vector<string>w1={"ab","c"};
    vector<string>w2={"ab","c"};
    cout<<s.arrayStringsAreEqual(w1,w2);
    return 0;
}
