#include <bits/stdc++.h>
using namespace std;
 struct TreeNode {
        int val;
        TreeNode *left;
        TreeNode *right;
        TreeNode() : val(0), left(nullptr), right(nullptr) {}
        TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
        TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};  
class Solution {
public:
    pair<int,int>dfs(TreeNode *root,int &count) {
        if(root == nullptr)return {0,0};

        pair<int,int>left = dfs(root->left,count);
        pair<int,int>right = dfs(root->right,count);

        int sum = root->val + left.first + right.first;
        int nodescount = 1+left.second+right.second;

        if(sum/nodescount == root->val)
        count++;
        return {sum,nodescount};
    }
    int averageOfSubtree(TreeNode* root) {
        int count = 0;
        pair<int,int>ans = dfs(root,count);
        return count;
    }
};
int main() {
    Solution s;
    int ans;
    TreeNode *first = new TreeNode(4);
    TreeNode *second = new TreeNode(8);
    TreeNode *third = new TreeNode(5);
    TreeNode *fourth = new TreeNode(0);
    TreeNode *fifth = new TreeNode(1);
    first->left = second;
    first->right = third;
    second->left = fourth;
    second->right = fifth;

    ans = s.averageOfSubtree(first);
    cout<<ans;
    return 0;
}
