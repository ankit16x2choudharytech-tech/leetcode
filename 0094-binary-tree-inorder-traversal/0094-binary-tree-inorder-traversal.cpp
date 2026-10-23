/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
 void solve(TreeNode* root, vector<int>& inorder) {
        if(root == nullptr) return;

        solve(root->left, inorder);
        inorder.push_back(root->val);
        solve(root->right, inorder);
    }
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> inorder;
        solve(root,inorder);

 return inorder;
    }
};