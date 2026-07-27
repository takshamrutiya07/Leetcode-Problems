#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int largest = -1;
        int secondlargest = -1;
        for(auto i:nums)
        {
            if(i>=largest)
            {
                secondlargest = largest;
                largest = i;
            }else if((i>secondlargest))
            {
                secondlargest = i;
            }
        }
        return (largest-1)*(secondlargest-1);
    }
};

int main() {
    Solution s;
    vector<int>nums={10,2,5,2};
    cout<<s.maxProduct(nums);
    return 0;
}
