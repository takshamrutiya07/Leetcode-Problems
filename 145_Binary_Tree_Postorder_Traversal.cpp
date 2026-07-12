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
class Solution {
public:
    void postorder(TreeNode *curr,vector<int>&ans)
    {
        if(curr == NULL)return;
        postorder(curr->left,ans);
        postorder(curr->right,ans);
        ans.push_back(curr->val);
    }
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int>ans;
        postorder(root,ans);
        return ans;
    }
};

int main() {
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
    vector<int>ans;
    ans=s.postorderTraversal(first);
    for(auto i:ans)
    {
        cout<<i<<" ";
    }
    return 0;
}
