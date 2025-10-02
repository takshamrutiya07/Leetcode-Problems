#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool rotateString(string s, string goal) {
        string sub="";
        string ne="";
        int size=s.length();
        if(size != goal.length())
        {
            return 0;
        }
        for(int i=0;i<size;i++)
        {
            sub=s.substr(0,1);
            s = s.substr(1,size);
            s += sub;
            if(s==goal)
            {
                return 1;
            }
        }
        return 0;
    }
};

int main() {
    Solution s;
    cout<<s.rotateString("abcde","cdeab");
    return 0;
}
