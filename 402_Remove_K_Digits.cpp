#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    string removeKdigits(string num, int k) {
        stack<char>st;
        string ans = "";
        int n = num.length();
        st.push(num[0]);
        for(int i=1;i<n;i++)
        {
            while(!st.empty() && k && (st.top()>num[i]))
            {
                st.pop();
                k--;
            }
            st.push(num[i]);
        }
        while(k && !st.empty())
        {
            st.pop();
            k--;
        }
        while(!st.empty())
        {
            ans += st.top();
            st.pop();
        }
        reverse(ans.begin(),ans.end());
        int i=0;
        while(i < ans.length() && ans[i] == '0')
        i++;
        string temp = ans.substr(i,ans.length());
        if(temp.length()==0)
        return "0";
        return temp;    
    }
};

int main() {
    Solution s;
    string num = "33526221184202197273";
    int k = 19;
    cout<<s.removeKdigits(num,k);
    return 0;
}
