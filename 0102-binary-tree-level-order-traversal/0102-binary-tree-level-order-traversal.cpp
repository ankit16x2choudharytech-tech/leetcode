
class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> ans;
        queue<TreeNode*> q;

        if(root == nullptr) return ans;

        q.push(root);

        while(q.empty() == false) {
            int count = q.size();
            vector<int> temp;

            for(int j = 0; j < count; j++) {
                TreeNode* curr = q.front();
                q.pop();

                temp.push_back(curr->val);

                if(curr->left != nullptr) {
                    q.push(curr->left);
                }

                if(curr->right != nullptr) {
                    q.push(curr->right);
                }
            }

            ans.push_back(temp);
        }

        return ans;
    }
};
