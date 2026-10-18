#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int count_sum(int num)
    {
        int digit_sum = 0;

        while (num > 0)
        {
            digit_sum += num % 10;
            num /= 10;
        }

        return digit_sum;
    }
    int minSwaps(vector<int>& nums)
    {
        int ans = 0;

        vector<int> temp = nums;

        sort(temp.begin(), temp.end(), [&](int a, int b)
        {
            if (count_sum(a) == count_sum(b))
            {
                return a < b;
            }

            return count_sum(a) < count_sum(b);
        });

        unordered_map<int, int> position;

        for (int i = 0; i < nums.size(); i++)
        {
            position[nums[i]] = i;
        }

        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] != temp[i])
            {
                int j = position[temp[i]];

                position[nums[i]] = j;
                position[nums[j]] = i;

                swap(nums[i], nums[j]);

                ans++;
            }
        }
        return ans;
    }
};
int main() {
    Solution s;
    vector<int>v={37,100};
    cout<<s.minSwaps(v);
    return 0;
}
