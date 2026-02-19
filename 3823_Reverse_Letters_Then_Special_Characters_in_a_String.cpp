#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    string reverseByType(string s) {
        int i=0;
        int j=s.length()-1;
        while(j>=i)
        {
            if(!(s[i]>=97 && s[i]<=122))
            {
                i++;
                continue;
            }
            if(!(s[j]>=97 && s[j]<=122))
            {
                j--;
                continue;
            }
               swap(s[i],s[j]);
               i++;
               j--;
        }
        i=0;
        j=s.length()-1;
        while(j>=i)
        {
            if((s[i]>=97 && s[i]<=122))
            {
                i++;
                continue;
            }
            if((s[j]>=97 && s[j]<=122))
            {
                j--;
                continue;
            }
               swap(s[i],s[j]);
               i++;
               j--;
        }
        return s;
    }
};

int main() {
    Solution s;
    string str=")ebc#da@f(";
    cout<<s.reverseByType(str);
    return 0;
}
