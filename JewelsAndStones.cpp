#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        int l1=jewels.length();
        int l2=stones.length();
        int count=0;
        for(int i=0;i<l1;i++)
        {
            for(int j=0;j<l2;j++)
            {
                if(jewels[i]==stones[j])
                count++;
            }
        }
        return count;
    }
};

int main() {
    Solution s;
    cout<<s.numJewelsInStones("aA","aaaAAbbb");
    return 0;
}
