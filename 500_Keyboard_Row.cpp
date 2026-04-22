#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<string> findWords(vector<string>& words) {
    string rows = "12210111011122000010020202";
    vector<string> result;

    for (string word : words) {
        string w = word;
        for (char &c : w) c = tolower(c);
        
        int firstRow = rows[w[0] - 'a'];
        bool valid = true;

        for (char c : w) {
            if (rows[c - 'a'] != firstRow) {
                valid = false;
                break;
            }
        }
        if (valid) result.push_back(word);
    }
    return result;
    }
};

int main() {
    Solution s;
    vector<string>w={"Hello","Alaska","Dad","Peace"};
    vector<string>words;
    words=s.findWords(w);
    for(auto i : words)
    {
        cout<<i<<" ";
    }
    return 0;
}
