#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    long long maximumHappinessSum(vector<int>& happiness, int k) {
        // sort(happiness.begin(),happiness.end(),greater<>());
        // int n = happiness.size();
        // int count=0;
        // long long sum = 0;
        // for(int i=0;i<k;i++)
        // {
        //     if(happiness[i]-count < 0)
        //     return sum;
        //     sum += (happiness[i]-count++);
        // }
        // return sum;

        sort(happiness.begin(), happiness.end(), greater<>());
        long long sum = 0;

        for (int i = 0; i < k; i++)
        {
            sum += max(0, happiness[i] - i);
        }

        return sum;
    }
};

int main() {
    Solution s;
    vector<int>v={1,2,3};
    int k = 2;
    cout<<s.maximumHappinessSum(v,k);
    return 0;
}
