#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int binary_search(vector<int>&a,int low,int high,int target){
    int mid=low+(high-low)/2;
    if(low<=high)
    {
        if(a[mid]==target)
        {
            return a[mid];
        }
        else if(a[mid]<target)
        {
            return binary_search(a,mid+1,high,target);
        }
        else if(a[mid]>target)
        {
            return binary_search(a,low,mid-1,target);
        }
    }
    return -1;
}
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        sort(nums1.begin(),nums1.end());
        sort(nums2.begin(),nums2.end());
        vector<int>ans={};
        for(int i=0;i<nums1.size();i++)
        {
            if(i==0 || nums1[i] != nums1[i-1])
            {
                int n=nums1[i];
                int answer=binary_search(nums2,0,nums2.size()-1,n);
                if(answer != -1)
                ans.push_back(answer);   
            }
        }
        return ans;
    }
};
int main() {
    Solution s;
    vector<int>nums1={4,9,5};
    vector<int>nums2={9,4,9,8,4};
    vector<int>ans;
    ans=s.intersection(nums1,nums2);
    for(auto i:ans)
    {
        cout<<i<<" ";
    }
    return 0;
}
