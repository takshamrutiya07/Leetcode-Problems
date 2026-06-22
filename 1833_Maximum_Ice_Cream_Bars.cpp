#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins) {
        vector<int>freq(*max_element(costs.begin(),costs.end())+1);
        for(auto i:costs)
        {
            freq[i]++;
        }
        int count=0;
        for(int i=1;i<freq.size() && coins>0;i++)
        {
            int cantake = min(coins/i,freq[i]);
            coins -= i*cantake;
            count += cantake;
        }
        return count;
        // int count=0;
        // int sum=0;
        // int i;
        // for(i=1;i<freq.size();i++)
        // {
        //     if(freq[i]>0)
        //     {
        //         count += freq[i];
        //         sum += freq[i]*i;
        //         if(sum==coins)
        //         {
        //             return count;
        //         }
        //         while(sum>coins && freq[i]>0)
        //         {
        //             freq[i]--;
        //             sum -= i;
        //             count--;
        //         }
        //     }
        // }
        // return count;
    }
}; 
int main() {
    Solution s;
    vector<int>v={6,7,8,9,10};
    cout<<s.maxIceCream(v,15);
    return 0;
}
