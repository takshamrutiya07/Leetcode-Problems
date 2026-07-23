#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isVowels(char ch)
    {
        return (ch=='a') || (ch=='e') || (ch=='i') || (ch=='o') || (ch=='u');
    }
    int maxVowels(string s, int k) {
        int n=s.length();
        int count=0;
        bool isVowel=true;
        int maxi=INT_MIN;
        for(int i=0;i<k;i++)
        {
            if(isVowels(s[i]))
            count++;
        }
        maxi = count;
        for(int i=k;i<n;i++)
        {
            if(isVowels(s[i-k]))
            count--;
            if(isVowels(s[i]))
            count++;

            maxi = max(count,maxi);
        }
        return maxi;
    }
};
int main() {
    Solution s;
    string str="abciiidef";
    int k=3;
    cout<<s.maxVowels(str,k);
    return 0;
}
