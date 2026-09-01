#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> powerfulIntegers(int x, int y, int bound) {
        vector<int>powx;
        vector<int>powy;
        unordered_set<int>ans;
        vector<int>v;
        int i=0;
        if(x==1)powx.push_back(1);
        else{
            while(true)
        {
            long n = pow(x,i);
            if(n>bound)break;
            powx.push_back(n);
            i++;
        }
        }
        i=0;
        if(y==1)powy.push_back(1);
        else{
            while(true)
        {
            long n = pow(y,i);
            if(n>bound)break;
            powy.push_back(n);
            i++;
        }
        }
        int sizeofx = powx.size();
        int sizeofy = powy.size();
        for(int j=0;j<sizeofx;j++)
        {
            i=0;
            while(i<sizeofy)
            {
                int sum = powx[j]+powy[i];
                if(sum>bound)
                break;
                ans.insert(sum);
                i++;  
            }
        }
        for(auto element:ans)
        {
            v.push_back(element);
        }
        return v;

        //optimal solution
        // vector<int> res{};
        // unordered_set<int> set{};
        // for (int xPow=1;xPow<bound;xPow*=x){ 
        //     for (int yPow=1;yPow+xPow<=bound;yPow*=y){
        //         set.insert(yPow+xPow);
        //         if (y==1) break;
        //     }
        //     if (x==1)break;
        // }
        // for(auto num : set) {
        //     res.push_back(num);
        // }
        // return res;
    }
};

int main() {
    Solution s;
    int x=2;
    int y=3;
    int bound=10;
    vector<int>ans;
    ans = s.powerfulIntegers(x,y,bound);
    for(auto i:ans)
    {
        cout<<i<<" ";
    }
    return 0;
}
