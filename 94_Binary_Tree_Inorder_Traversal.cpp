#include <bits/stdc++.h>
using namespace std;

struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class Solution
{
public:
    void inorder(TreeNode *curr, vector<int> &v)
    {
        if (curr == NULL)
            return;
        inorder(curr->left, v);
        v.push_back(curr->val);
        inorder(curr->right, v);
    }
    vector<int> inorderTraversal(TreeNode *root)
    {
        vector<int> v;
        inorder(root, v);
        return v;
    }
};

int main()
{
    Solution s;

    TreeNode *first = new TreeNode(1);
    TreeNode *second = new TreeNode(2);
    TreeNode *third = new TreeNode(3);
    TreeNode *fourth = new TreeNode(4);
    TreeNode *fifth = new TreeNode(5);
    TreeNode *sixth = new TreeNode(6);

    first->left=second;
    first->right=third;
    second->left=fourth;
    fourth->left=fifth;
    fifth->left=sixth;
    s.inorderTraversal(first);
    return 0;
}
