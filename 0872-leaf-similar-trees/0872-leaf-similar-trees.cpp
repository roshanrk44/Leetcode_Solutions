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
void solve(vector<int> &tree,TreeNode* root)
{
    if(root==NULL)
    {
        return;
    }
    if(root->left==NULL&&root->right==NULL)
    {
        tree.push_back(root->val);
    }
    solve(tree,root->left);
    solve(tree,root->right);
}
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
       vector<int> tree1; 
       vector<int> tree2;
       solve(tree1,root1);
       solve(tree2,root2); 
       return tree1==tree2;

    }
};