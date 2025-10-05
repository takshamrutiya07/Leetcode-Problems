#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        int count=0,max=0,temp=0;
        int size=nums.size();
        sort(nums.begin(),nums.end());
        for(int i=0;i<size-1;i++)
        {
            if(nums[i]==nums[i+1])
            {
                count++;
            }else{
                if(count>temp)
                {
                    temp=count;
                    max = count;
                }
                else if(count==temp)
                {
                    count++;
                    max += count;
                }
                count=0;
            }
        }
        if (count > 0) {
            if (count > temp)
            {
                max = count;
            } 
            else if(count == temp)
            {
                count++;
                max += count;
            }
        }

        if(max==0)
        {
            return size;
        }
        return max+1;
    }
};
int main() {
    Solution s;
    vector<int>nums={6,13,15,15,11,6,7,12,4,11};//4,6,6,7,11,11,13,15,15
    cout<<s.maxFrequencyElements(nums);
    return 0;
}
