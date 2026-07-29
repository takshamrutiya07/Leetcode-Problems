#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string intToRoman(int num) {
        vector<int>v={1000,900,500,400,100,90,50,40,10,9,5,4,1};
        vector<string>signs={ "M", "CM", "D", "CD", "C", "XC", "L",
        "XL", "X", "IX", "V", "IV", "I"};
        string ans="";
        int i=0;
        while(num>0)
        {
            while(num>=v[i])
            {
                ans += signs[i];
                num = num - v[i];
            }
            i++;
        }
        return ans; 
    }
};

int main() {
    Solution s;
    int num = 3749;
    cout<<s.intToRoman(num);
    return 0;
}
