#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
        int n=image.size();
        for(int i=0;i<n;i++)
        {
            reverse(image[i].begin(),image[i].end());
        }
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<image[i].size();j++)
            {
                if(image[i][j]==0)
                image[i][j]=1;
                else
                image[i][j]=0;
            }
        }
        return image;
    }
};

int main() {
    Solution s;
    vector<vector<int>>image={{1,0,0},{0,0,1},{1,0,0}};
    vector<vector<int>>ans;
    ans=s.flipAndInvertImage(image);
    return 0;
}
