#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool judgeCircle(string moves){
        int size=moves.length();
        int ud=0;
        int lr=0;
        for(int i=0;i<size;i++)
        {
            if(moves[i]=='U')
            {
                ud++;
            }else if(moves[i]=='D')
            {
                ud--;
            }else if(moves[i]=='L')
            {
                lr--;
            }else{
                lr++;
            }
        }
        if(ud==0 && lr==0)
        {
            return 1;
        }
        return 0;
    }
};
int main() {
    Solution s;
    cout<<s.judgeCircle("LR");
    return 0;
}
