#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        stack<int>st;
        vector<int>ans;
        int maxi = INT_MIN;
        for(int i=0;i<asteroids.size();i++)
        {
            if(asteroids[i]<0 && st.empty())
            {
                ans.push_back(asteroids[i]);
            }
            else if(asteroids[i]<0 && !st.empty())
            {
                bool flag = false;
                while(!st.empty() && abs(asteroids[i])>=st.top())
                {
                    if(!st.empty() && abs(asteroids[i])==st.top())
                    {
                        flag = true;//for checking if both are same then both will be exploded
                        st.pop();
                        break;
                    }else{
                        st.pop();
                    }   
                }
                if(st.empty() && !flag)
                ans.push_back(asteroids[i]);
            }else{
                st.push(asteroids[i]);
            }
        }
        int n = ans.size();
        while(!st.empty())
        {
            ans.push_back(st.top());
            st.pop();
        }
        reverse(ans.begin()+n,ans.end());
        return ans;
    }
};

int main() {
    Solution s;
    vector<int>a={3,5,-6,2,-1,4};
    vector<int>ans;
    ans = s.asteroidCollision(a);
    for(auto i:ans)
    {
        cout<<i<<" ";
    }
    return 0;
}
