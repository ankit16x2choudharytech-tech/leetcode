/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    bool exist(TreeNode* root,TreeNode *target){
        if(root==nullptr)return false;
        if(root==target)return true;
        return exist(root->left,target) || exist(root->right,target);
    }
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        
        if(root==p || root==q)return root;
        else if(exist(root->left,p) && exist(root->right,q))return root;
        else if(exist(root->left,q) && exist(root->right,p))return root;
         else if(exist(root->left,q) && exist(root->left,p))return lowestCommonAncestor(root->left,p,q);
          else 
          return lowestCommonAncestor(root->right,p,q);

    }
};