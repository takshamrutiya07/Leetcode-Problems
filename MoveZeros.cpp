//LeetCode Question 283
#include <bits/stdc++.h>
using namespace std;
vector<int> Move(vector<int> &n,int i,int size,int &count)
{
    int j;
    read:
    for(j=i;j<size-1-count;j++)
    {
        n[j]=n[j+1];
    }
    n[j]=0;
    if(n[i]==0)
    {
        count++;
        if(count >= size - i)
            return n;
        goto read;
    }
    return n;
}
int main()
{
    vector<int>nums={0,1,0,3,12};
    int size=nums.size();
    int count=0;
    for(int i=0;i<size-count;i++)
    {
        if(nums[i]==0)
        {
            nums=Move(nums,i,size,count);
            count++;
        }
    }

    //Easy way to solve the problem

    
    // int i=0;
    // for(int j=0;j<nums.size();j++){
    //         if(nums[j]!=0){
    //             swap(nums[j],nums[i]);
    //             i++;
    //         }
    // }
    for(int i=0;i<size;i++)
    {
        cout<<nums[i]<<" ";
    }
    return 0;
}