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
    //using recursion : 
    // void PreOrder(TreeNode* curr,vector<int>&ans)
    // {
    //     if(curr == NULL)return;
    //     ans.push_back(curr->val);

    //     PreOrder(curr->left,ans);

    //     PreOrder(curr->right,ans);
    // }
    // vector<int> preorderTraversal(TreeNode* root) {
    //     vector<int>ans;
    //     PreOrder(root,ans);
    //     return ans;
    // }

    //iterative solution
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int>ans;
        stack<TreeNode*>st;
        st.push(root);
        if(root == NULL)
        return {};
        while(!st.empty())
        {
            TreeNode* curr = st.top();
            st.pop();
            ans.push_back(curr->val);
            if(curr->right != NULL)
            {
                st.push(curr->right);
            }
            if(curr->left != NULL)
            {
                st.push(curr->left);
            }
        }
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
    ans=s.preorderTraversal(first);
    for(auto i:ans)
    {
        cout<<i<<" ";
    }
    return 0;
}
