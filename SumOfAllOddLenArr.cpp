#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& arr) {
        int size=arr.size();
        int sum=0;
        int ans=0;
        for(int i=0;i<size;i+=2)
        {
            int j=0;
            while(i+j<size && i+j<size)
            {
                int start=j;
                int s=i+j;
                int sum=0;
                while(start<=i+j)
                {
                    sum+=arr[start];
                    start++;
                }
                j++;
                ans += sum;   
            }
        }
        return ans;
    }
};
int main() {
    Solution s;
    vector<int>v={1,4,2,5,3};
    cout<<s.sumOddLengthSubarrays(v);
    return 0;
}
