#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int numberOfChild(int n, int k) {
        n--;
        int r=k/n;//round iterate
        int rem=k%n;//remaing elements
        if(r%2==0)
        {
            return rem;
        }
        return (n-rem);
    }
};
int main() {
    Solution s;
    cout<<s.numberOfChild(5,6);
    return 0;
}
