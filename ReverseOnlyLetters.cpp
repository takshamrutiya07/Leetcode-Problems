 #include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    string reverseOnlyLetters(string s) {
        int start=0;
        int end=s.length()-1;
        while(start<end)
        {
            if(!isalpha(s[start]))
            {
                start++;
            }else if(!isalpha(s[end]))
            {
                end--;
            }else{
                swap(s[start],s[end]);
                start++;
                end--;
            }
        }
        return s;
    }
};
int main() {
    Solution s;
    string str="a-bC-dEf-ghIj";
    cout<<s.reverseOnlyLetters(str);
    return 0;
}
