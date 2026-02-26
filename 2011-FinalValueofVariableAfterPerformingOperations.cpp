#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        int x=0;
        for(auto i:operations)
        {
            if(i=="X++")
            x++;
            else if(i=="++X")
            ++x;
            else if(i=="X--")
            x--;
            else
            --x;
        }
        return x;
    }
};

int main() {
    Solution s;
    vector<string>v={"--X","X++","X++"};
    cout<<s.finalValueAfterOperations(v);
    return 0;
}
