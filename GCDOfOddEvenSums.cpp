#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int gcdOfOddEvenSums(int n) {
        int sumodd=0;
        int sumeven=0;
        for(int i=1;i<=n*2;i++)
        {
            if(i%2)
            sumodd += i;
            else
            sumeven += i;
        }
        while(sumeven != 0) 
        {
            int temp = sumeven;
            sumeven = sumodd % sumeven;
            sumodd = temp;
        } 
        return sumodd;
    }
};
int main() {
    Solution s;
    int n=4;
    cout<<s.gcdOfOddEvenSums(n);
    return 0;
}
