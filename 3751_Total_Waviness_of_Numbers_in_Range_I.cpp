#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int totalWaviness(int num1, int num2){
    int ans = 0;
    for(int num = num1; num <= num2; num++) {
    string s = to_string(num);
    for(int i = 1; i < s.size()-1; i++) {

        if(s[i] > s[i-1] && s[i] > s[i+1])
            ans++;
        else if(s[i] < s[i-1] && s[i] < s[i+1])
            ans++;
    }
}
    return ans;
}
};
int main() {
    Solution s;
    int n1=4848;
    int n2=4848;
    cout<<s.totalWaviness(n1,n2);
    return 0;
}
