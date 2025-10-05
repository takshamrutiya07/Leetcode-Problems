#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
     int searchInsert(vector<int>& nums, int target) {
       return search(nums,0,nums.size()-1,target);
    }
    int search(vector<int> nums,int front,int rear,int target){
        if(front<=rear){
            int mid = front + (rear - front)/2;            
            if(target==nums[mid]){
                return mid;
            }
            else if(target>nums[mid]){
                return search(nums,mid+1,rear,target);
            }
            else if(target<nums[mid]){
                return search(nums,front,mid-1,target);
            }
        }
        return front;
    }
};
int main() {
    Solution s;
    vector<int>nums={2,5,7,9};
    int target=5;
    cout<<s.searchInsert(nums,target);
    return 0;
}