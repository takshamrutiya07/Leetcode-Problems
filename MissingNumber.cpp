#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int missingNumber(vector<int>& nums) {
        /*Approach 1:sum of all the numbers between 0 to size of vector(n(n+1)/2)
         final ans : n(n+1)/2 - sum of vector nums
         ex:nums={0,1,3} = 4  , sum of first 3 number = 1+2+3=6
         ans=6-4=2
         time complexity:O(n)
         space complexity:O(1)
        */
       int n = nums.size();
       int sum=0;
       for(int i=0;i<n;i++)
       {
          sum += nums[i];
       }
       return (n*(n+1))/2 - sum;

       /*Approach 2: creat another vector of n+1 size and give value -1 to each index
       and then put the number from nums vector to that new vector on that numbers index for example if number is 2 then put it on newvectors 2 index. and then find on which index have -1 value return that index.
       time complexity:O(n)
       space complexity:O(n)
       */

    //    int n= nums.size();
    //    vector<int>v(n+1,-1);//full vector have -1 value at each index
    //    for(int i=0;i<n;i++)
    //    {
    //       v[nums[i]]=nums[i];
    //    }
    //    for(int i=0;i<n+1;i++)
    //    {
    //       if(v[i]==-1) return i;
    //    }
    //    return n;
     }
};
int main() {
    Solution s;
    vector<int>v={0,1,3,2};
    cout<<s.missingNumber(v);
    return 0;
}
