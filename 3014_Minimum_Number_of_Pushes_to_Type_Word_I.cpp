#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minimumPushes(string word) {
        int n=word.length();
        int press=0;
        for(int i=0;i<n;i++)
        {
            press += i/8 + 1;
        }
        return press;
    }
};
int main() {
    Solution s;
    string word="abcde";
    cout<<s.minimumPushes(word);
    return 0;
}
