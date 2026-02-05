#include<iostream>
using namespace std;
class Solution {
  public:
  char addbit(char a, char b, int &c) {
    int n1 = a - '0';
    int n2 = b - '0';
    int sum = (n1 + n2 + c) % 2;
    c = (n1 + n2 + c) / 2; 
    return char(sum + '0');
}

    string addBinary(string& s1, string& s2) {
       string sum;
       int c=0;
       int i = s1.size()-1;
       int j = s2.size()-1;
    while (i >= 0 || j >= 0 || c) {
        char bitA = (i >= 0) ? s1[i] : '0';
        char bitB = (j >= 0) ? s2[j] : '0';
        char result = addbit(bitA, bitB, c);
        sum = result + sum;
        i--; j--;
    }
    while(sum[0]=='0'&&sum.length()>1)
    {
       sum.erase(sum.begin());
    }
    return sum;
    }
};

int main()
{
    Solution s;
    string s1="00101",s2="000110";
    cout<<s.addBinary(s1,s2);
    return 0;
}