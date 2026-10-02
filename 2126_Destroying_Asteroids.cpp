#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool asteroidsDestroyed(int mass, vector<int>& asteroids) {
        sort(asteroids.begin(),asteroids.end());
        int n = asteroids.size();
        for(int i=0;i<n;i++)
        {
            if(mass<asteroids[i])
            {
                return false;
            }
            if(asteroids[n-1]<=mass)
            {
                return true;
            }
            mass += asteroids[i];
        }
        return true;
    }
};

int main() {
    Solution s;
    vector<int>ast = {3,9,19,5,21};
    int mass = 10;
    cout<<s.asteroidsDestroyed(mass,ast);
    return 0;
}
