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
    int sumOfLeftLeaves(TreeNode* root) {
        queue<TreeNode*> q;
        q.push(root);
        int ans=0;
        while(!q.empty())
        {
            TreeNode* temp=q.front();
            q.pop();
            if(temp->left!=NULL)
            {
                if(temp->left->left==NULL&&temp->left->right==NULL)
                ans+=temp->left->val;
                q.push(temp->left);
            }
            if(temp->right!=NULL)
            {
                q.push(temp->right);
            }
        }
        return ans;
    }
};