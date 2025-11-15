#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        int size1=nums1.size();
        int size2=nums2.size();
        int i=0;
        bool flag=false;
        vector<int>ans;
        while(i<size1)
        {
            flag=false;
            for(int j=0;j<size2;j++)
            {
                if(nums1[i]==nums2[j])
                {
                    for(int start=j;start<size2;start++)
                    {
                        if(nums2[start]>nums1[i])
                        {
                            ans.push_back(nums2[start]);
                            flag=true;
                            break;
                        }
                    }
                    if(!flag) ans.push_back(-1);
                    break;
                }
            }
            i++;  
        }
        return ans;
    }
};
int main() {
    Solution s;
    vector<int>n1={4,1,2};
    vector<int>n2={1,3,4,2};
    vector<int>ans;
    ans=s.nextGreaterElement(n1,n2);
    for(auto x:ans)
    {
        cout<<x<<" ";
    }
    return 0;
}
