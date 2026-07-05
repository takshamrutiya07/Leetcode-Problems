#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    long long countVowels(string word) {
        int n = word.length();
        long long count=0;
        for(int i=0;i<n;i++)
        {
            if(word[i]=='a' || word[i]=='e' || word[i]=='i' ||
            word[i]=='u' || word[i]=='o')
            {
                count += (1LL)*(i+1)*(n-i);
            }
        }
        return count;
    }
};

int main() {
    Solution s;
    string word = "aba";
    cout<<s.countVowels(word);
    return 0;
}
