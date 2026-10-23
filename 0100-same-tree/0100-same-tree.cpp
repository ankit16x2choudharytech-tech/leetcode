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
    bool isSameTree(TreeNode* p, TreeNode* q) {
        if(p==nullptr && q==nullptr)return true;
        if(p==nullptr && q!=nullptr)return false;
        if(p!=nullptr && q==nullptr)return false;

        if(p->val!=q->val)return false;

        int lst= isSameTree(p->left,q->left);
        if(lst==false)return false;
         int Rst= isSameTree(p->right,q->right);
        if(Rst==false)return false;

        return true;

    }
};