#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int scoreOfParentheses(string s) {
        int ans = 0;
        int count = 0;
        int len = s.length();
        for(int i=0;i<len-1;i++)
        {
            if(s[i]=='(' && s[i+1]==')')
            {
                ans += (1<<count);
                i++;
            }else if(s[i]=='(')
            {
                count++;
            }
            else{
                count--;
            }
        }
        return ans;
    }
};
int main() {
    Solution s;
    string str = "(())";
    cout<<s.scoreOfParentheses(str);
    return 0;
}
