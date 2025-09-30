#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    //sortest way to solve 
    int largestPerimeter(vector<int>& nums) {
        sort(nums.begin(), nums.end()); 
        int size=nums.size();
       for (int i = size-1; i >= 2; i--) { 
            if (nums[i-1] + nums[i-2] > nums[i]) {
                return nums[i] + nums[i-1] + nums[i-2];
    }
       }
       return 0;
    }
};
    // int largestPerimeter(vector<int>& nums) {
    //     int size=nums.size();
    //     int maxi=0,sum=0;
    //         int first=0;
    //         int second=first+1;
    //         int third=second+1;
    //         sort(nums.begin(),nums.end());
    //         while(first<size-2)
    //         {
    //             if (third >= size) {
    //             if (second >= size - 2) { 
    //                 first++;
    //                 if(first >= size-2) break;
    //                 second = first + 1;
    //             } else { 
    //                 second++;
    //             }
    //             third = second + 1; 
    //             continue;
    //         }
    //         if(nums[first]+nums[second]>nums[third])
    //             {
    //                sum = nums[first]+nums[second]+nums[third];
    //                maxi=max(maxi,sum);
    //             }
    //         third++;
    //         }
    //     return maxi;
//     }
// };
int main() {
    Solution s;
    vector<int>nums={2,1,2};
    cout<<s.largestPerimeter(nums);
    return 0;  
}



