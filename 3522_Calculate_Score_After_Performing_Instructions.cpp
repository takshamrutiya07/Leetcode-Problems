#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    long long calculateScore(vector<string>& instructions, vector<int>& values) {
        int n = instructions.size();
        vector<bool> visited(n, false);
        long long score = 0;
        int i = 0;
        while (i >= 0 && i < n && !visited[i]) {

            visited[i] = true;
            if (instructions[i] == "add") {
                score += values[i];
                i++;
            }
            else {
                i = i + values[i];
            }
        }
        return score; 
    }
};
int main() {
    Solution s;
    vector<string> instructions={"jump","add","add","jump","add","jump"};
    vector<int>values={2,1,3,1,-2,-3};
    cout<<s.calculateScore(instructions,values);
    return 0;
}
