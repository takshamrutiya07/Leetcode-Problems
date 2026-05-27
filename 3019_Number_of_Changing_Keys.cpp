#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int countKeyChanges(string s) {
        int n=s.length();
        int count=0;
        for(int i=1;i<n;i++)
        {
            if (tolower(s[i]) != tolower(s[i - 1])) {
                count++;
            }
        }
        return count;
    }
};

int main() {
    Solution s;
    string str="aAaAaA";
    cout<<s.countKeyChanges(str);
    return 0;
}
