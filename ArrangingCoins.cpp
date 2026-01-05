#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
        int arrangeCoins(int n) {
            long long low=0;
            long long high=n;
            long long ans=0;
            while(low<=high)
            {
                long long mid = low+(high-low)/2;
                long long coins = mid*(mid+1)/2;
                if(coins==n)
                return mid;

                else if(coins<n)
                {
                    ans=mid; //valid rows
                    low = mid+1; // checking for more rows   
                }

                else{
                    high=mid-1; //coins>n reduce rows
                }
            }
            return ans;
        }
   
    // int arrangeCoins(int n) {
    //     int count=0;
    //     if(n==1)return 1;
    //     for(int i=1;i<=n;i++)
    //     {
    //        n -= i;
    //        count++;
    //     }
    //     return count;
    // }


    /*
    O(1) Time complexity
    int arrangeCoins(int n) {
    k(k+1)/2 <= n
    k^2 + k - 2n <= 0 
    k = -1 + sqrt(1+8n)/2
    return (int)(sqrt(1 + 8LL * n) - 1) / 2;
    }
    */
};
int main() {
    Solution s;
    int n=8;
    cout<<s.arrangeCoins(n);
    return 0;
}
