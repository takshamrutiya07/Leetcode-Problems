#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    string mapWordWeights(vector<string>& words, vector<int>& weights) {
        int n=words.size();
        string str="";
        for(int i=0;i<n;i++)
        {
            int sum=0;
            for(int j=0;j<words[i].length();j++)
            {
                int num = words[i][j]-'a';
                sum += weights[num];
            }
            char ch = char('z'-(sum%26));
            cout<<sum<<" ";
            str += ch;
        }
        return str;
    }
};

int main() {
    Solution s;
    vector<string> words={{"abcd"},{"abcd"}};
    vector<int> weights={5,3,12,14,1,2,3,2,10,6,6,9,7,8,7,10,8,9,6,9,9,8,3,7,7,2};
    cout<<s.mapWordWeights(words,weights);
    return 0;
}
