#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    string reverseParentheses(string s) {
        // int n = s.size();
        // vector<int> pair(n);
        // stack<int> st;
        // for (int i = 0; i < n; ++i) {
        //     if (s[i] == '(') st.push(i);
        //     else if (s[i] == ')') {
        //         int j = st.top();
        //         st.pop();
        //         pair[i] = j;
        //         pair[j] = i;
        //     }
        // }
        // string res;
        // int i = 0, dir = 1;
        // while (i >= 0 && i < n) {
        //     if (s[i] == '(' || s[i] == ')') {
        //         i = pair[i];
        //         dir = -dir;
        //     } else {
        //         res += s[i];
        //     }
        //     i += dir;
        // }
        // return res;

        stack<int>st;
        for(int i=0;i<s.length();i++)
        {
            if(s[i] == '(')
            st.push(i);
            if(s[i] == ')')
            {
                reverse(s.begin()+st.top(),s.begin()+i);
                st.pop();
            }
        }
        string ans = "";
        for(auto i:s)
        {
            if(i!='(' && i!=')')
            ans += i;
        }
        return ans;
    }
};
int main() {
    Solution s;
    string str = "(u(love)i)";
    cout<<s.reverseParentheses(str);
    return 0;
}
