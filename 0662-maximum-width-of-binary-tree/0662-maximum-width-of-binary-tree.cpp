class Solution {
public:
    int widthOfBinaryTree(TreeNode* root) {
        if(root==nullptr)return 0;

        int Maxwidth = 0;
        queue<pair<TreeNode*,int>>q;
        q.push({root,0});

        while(!q.empty()){
            int curr = q.size();
            long long start = q.front().second;
            long long end = q.back().second;
https://leetcode.com/_next/static/media/dark-pending.1t5jt28i65f5e.gif$0
            Maxwidth = max(Maxwidth,(int)(end-start+1));

            for(int i=0;i<curr;i++){
                TreeNode* ans = q.front().first;
                long long idx = q.front().second-start;
                q.pop();

                if(ans->left!=nullptr)
                    q.push({ans->left,2*idx});

                if(ans->right!=nullptr)
                    q.push({ans->right,2*idx+1});
            }
        }

        return Maxwidth;
    }
};