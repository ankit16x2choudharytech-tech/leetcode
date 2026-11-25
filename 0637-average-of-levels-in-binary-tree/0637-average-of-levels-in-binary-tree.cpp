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
    vector<double> averageOfLevels(TreeNode* root) {
        vector<double> ans;
        queue<TreeNode*> q;
        q.push(root);

        while(q.empty()==false){
            double sum =0;
            int count = q.size();
            for(int i =0 ; i<count;i++){
                TreeNode* curr =q.front();
                sum  = sum + curr->val;
                q.pop();
                if(curr->left!=nullptr){
                    q.push(curr->left);
                }
                 if(curr->right!=nullptr){
                    q.push(curr->right);
                }
            }
            double answer  = sum/count;
            ans.push_back(answer);
            sum =0;

        }


        return ans;
    }
};