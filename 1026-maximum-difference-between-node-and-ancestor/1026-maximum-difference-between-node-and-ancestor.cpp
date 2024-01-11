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
int res=0;
int solve(TreeNode* root, int n)
{
    if(root==NULL)
    return 0;
    ans=max(ans,abs(n-root->val));
    solve(root->left,n);
    solve(root->right,n);
    return ans;


}
    int maxAncestorDiff(TreeNode* root) {
      if(root==NULL)
      {
          return 0;
      }
      ans=0;
      int x=solve(root,root->val);
      res=max(res,x);
      maxAncestorDiff(root->left);
      maxAncestorDiff(root->right);
return res;
    }
};