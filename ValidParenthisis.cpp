#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    bool valid(string s)
    {
        stack<char> st;
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] == '{' || s[i] == '[' || s[i] == '(')
            {
                st.push(s[i]);
            }
            else
            {
                if(st.empty())
                return false;

                if ((s[i] == '}' && st.top() != '{') || (s[i] == ')' && st.top() != '(') || (s[i] == ']' && st.top() != '['))
                {
                    return false;
                }
                else
                {
                    st.pop();
                }
            }
        }
        if(!st.empty())
        return false;
        return true;
    }
};
int main()
{
    Solution s;
    string str = "{{([)}}";
    cout << s.valid(str);
    return 0;
}
