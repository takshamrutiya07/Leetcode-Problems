#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int minAddToMakeValid(string s) {
        stack<char>st;
        for(auto ch : s)
        {
            if(ch == '(')
            st.push(ch);
            else if(!st.empty() && st.top()=='(')
            st.pop();
            else
            st.push(ch);
        }
        return st.size();
    }
};
int main() {
    Solution s;
    string str = "(()";
    cout<<s.minAddToMakeValid(str);
    return 0;
}
