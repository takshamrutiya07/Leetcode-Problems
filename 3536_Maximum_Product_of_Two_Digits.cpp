#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxProduct(int n) {
        int largest=0;
        int secondlargest=0;
        while(n>0)
        {
            int num = n%10;
            if(num>=largest)
            {
                secondlargest = largest;
                largest = num;
            }else if(num>=secondlargest)
            {
                secondlargest = num;
            }
            n /= 10;
        }
        return largest*secondlargest;
    }
};

int main() {
    Solution s;
    int num = 4422;
    cout<<s.maxProduct(num);
    return 0;
}
