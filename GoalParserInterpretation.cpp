#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    string interpret(string command) {
        int n=command.length();
        string str="";
        for(int i=0;i<n;i++)
        {
            if((command[i] == '(') && (command[i+1]==')'))
            {
                str += 'o';
            }else if((command[i] != '(') && (command[i] != ')'))
            {
                str += command[i];
            }
        }
        return str;
    }
};
int main() {
    Solution s;
    string str="G()(al)";
    cout<<s.interpret(str);
    return 0;
}
