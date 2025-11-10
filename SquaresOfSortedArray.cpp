
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n=nums.size();
        stack<long long> square;
        int i=0;
        int j=n-1;
        long long n1;
        long long n2;
        int count=0;
        while(count<n)
        {
            n1=nums[i]*nums[i];
            n2=nums[j]*nums[j];
            n1>n2?(square.push(n1),i++):(square.push(n2),j--); 
            count++; 
        }
        for(int i=0;i<n;i++)
        {
            nums[i]=square.top();
            square.pop();
        }
        return nums;
    }
};
int main() {
    Solution s;
    vector<int>v={-4,-1,0,1,3,5,10};
    vector<int>ans=s.sortedSquares(v);
    for(auto x:ans)
    {
        cout<<x<<" ";
    }
    return 0;
}
