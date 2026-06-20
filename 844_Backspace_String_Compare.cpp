#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool backspaceCompare(string s, string t) {
        int l = s.length() - 1,r = t.length() - 1,skip_s=0,skip_t=0;
        while(l >=0 || r >= 0){
            while(l>=0){
                if(s[l] == '#'){
                    skip_s++;
                    l--;
                }
                else if(skip_s>0){
                    skip_s--;
                    l--;
                }
                else break;
            }
            while(r>=0){
                if(t[r] == '#'){
                    skip_t++;
                    r--;
                }
                else if(skip_t>0){
                    skip_t--;
                    r--;
                }
                else break;
            }

            if(l>=0 && r>=0 && s[l] != t[r]) return false;
            if(l>=0 != r>=0) return false;

            l--;r--;
        }

        return true;
    }
};
int main() {
    Solution s;
    string str = "ab#c";
    string str1 ="ad#c";
    cout<<s.backspaceCompare(str,str1);
    return 0;
}
