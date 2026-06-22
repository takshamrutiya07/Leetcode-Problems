#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int maxNumberOfBalloons(string text) {
        int len=text.length();
        vector<int>v(5,0);
        for(auto i:text)
        {
            if(i=='b')
                v[0]++;
            else if(i=='a')
                v[1]++;
            else if(i=='l')
                v[2]++;
            else if(i=='o')
                v[3]++;
            else if(i=='n')
                v[4]++; 
        }
        v[2]/=2;
        v[3]/=2;
        return *min_element(v.begin(),v.end());
    }
};
int main() {
    Solution s;
    string str="nlaebolko";
    cout<<s.maxNumberOfBalloons(str);
    return 0;
}
