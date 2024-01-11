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
int ans=0;
int solve(TreeNode* root, int mini, int maxi)
{
    if(root==NULL)
    return 0;
    mini=min(mini,root->val);
    maxi=max(maxi,root->val);
     ans=max(ans,abs(maxi-mini));
    solve(root->left,mini, maxi);
    solve(root->right,mini, maxi);
    return ans;  
}
    int maxAncestorDiff(TreeNode* root) {
      if(root==NULL)
      {
          return 0;
      }
      return solve(root,root->val,root->val);
    }
};