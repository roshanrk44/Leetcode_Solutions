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
    bool res=true;
int solve(TreeNode* root)
{
    if(root==NULL)
    {
        return 0;
    }
    int x=1+solve(root->left);
    int y=1+solve(root->right);
    int ans=max(x,y);
    return ans;
}
    bool isBalanced(TreeNode* root) {
        if(root==NULL)
        return true;
        if(abs(solve(root->left)-solve(root->right))>1)
        res=false;
        isBalanced(root->left);
        isBalanced(root->right);
        return res;
    }
};