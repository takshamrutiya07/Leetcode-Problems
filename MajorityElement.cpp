#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int size=nums.size();
        int count=0;
        int candidate=0;
        for(auto num:nums)
        {
            if(count==0)
            {
                candidate=num;
            }
            if(num==candidate)
            {
                count++;
            }else{
                count--;
            }
            
        }
        return candidate;  
    }
};
int main() {
    Solution s;
    vector<int>v={1,4,3,3,3,3,5};
    cout<<s.majorityElement(v);
    return 0;
}
