#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int getLeastFrequentDigit(int n) {
        vector<int>num(10,0);
        while(n>0)
        {
            num[n%10]++;
            n /= 10;
        }
        int mini=INT_MAX;
        int index=0;
        for(int i=0;i<10;i++)
        {
            if(num[i]<mini && num[i]!=0)
            {
                mini = num[i];
                index=i;
            }
        }
        return index;
    }
};

int main() {
    Solution s;
    int n=1445254;
    cout<<s.getLeastFrequentDigit(n);
    return 0;
}
