#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool isRobotBounded(string instructions) {
        int size=instructions.size();
        int i=0;
        int x=0;
        char direction='N';
        int y=0;
        while(i<size)
        {
            if(instructions[i]=='G')
            {
                if(direction=='N')
                y++;
                else if(direction=='S')
                y--;
                else if(direction=='W')
                x--;
                else 
                x++;
            }else if(instructions[i]=='L')
            {
                if(direction=='N')
                direction='W';
                else if(direction=='W')
                direction='S';
                else if(direction=='S')
                direction='E';
                else 
                direction='N';
            }else{
                if(direction=='N')
                direction='E';
                else if(direction=='E')
                direction='S';
                else if(direction=='S')
                direction='W';
                else 
                direction='N';
            }
            i++;
        }
        if((x==0 && y==0) || direction!='N') return 1;
        return 0;
    }
};
int main() {
    Solution s;
    string inst = "GGLL";
    cout<<s.isRobotBounded(inst);
    return 0;
}
