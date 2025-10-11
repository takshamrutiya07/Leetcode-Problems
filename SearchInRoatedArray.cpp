//Leetcode Question:33
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int search(vector<int>& nums, int target) {
        // int size=nums.size();
        // for(int i=0;i<size;i++)
        // {
        //     if(nums[i]==target)
        //     {
        //         return i;
        //     }
        // }
        // return -1;
        int st=0;
        int end=nums.size()-1;
        while(st<=end)
        {
            int mid=st+(end-st)/2;
            if(nums[mid]==target)
            {
                return mid;
            }
            if(nums[st]<=nums[mid])
            {
                if(nums[st]<=target && target<=nums[mid])
                {
                    end=mid-1;
                }
                else
                {
                    st=mid+1;
                } 
            }else{
                if(nums[mid]<=target && target<=nums[end])
                {
                    st=mid+1;
                }else
                {
                    end=mid-1;
                }
            }
        }
        return -1;
    }
};
int main() {
    Solution s;
    vector<int>nums={3,1};
    cout<<s.search(nums,1);
    return 0;
}
