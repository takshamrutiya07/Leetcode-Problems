#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int kItemsWithMaximumSum(int numOnes, int numZeros, int numNegOnes, int k) {
        int sum=0;
        for(int i=0;i<k;i++)
        {
            if(numOnes != 0)
            {
                numOnes--;
                sum++;
            }else if(numZeros !=0 )
            {
                numZeros--;
            }else
            sum--;
        }
        return sum;
    }
};
int main() {
    Solution s;
    int n1=3,n2=2,n3=1,k=4;
    cout<<s.kItemsWithMaximumSum(n1,n2,n3,k);
    return 0;
}
