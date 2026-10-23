class Solution {
public:
    int countNodes(TreeNode* root) {
        if (root == nullptr) return 0;

        int l = 0, r = 0;
        TreeNode* left = root;
        TreeNode* right = root;

        while (left != nullptr) {
            l++;
            left = left->left;
        }

        while (right != nullptr) {
            r++;
            right = right->right;
        }

        if (l == r) {
            return (1 << l) - 1;
        }

        return 1 + countNodes(root->left) + countNodes(root->right);
    }
};