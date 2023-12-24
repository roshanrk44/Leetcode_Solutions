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
int res=INT_MIN;
int maxi=INT_MIN;
int maxPathSum(TreeNode* root,int ans)
{

    if(root==NULL)
    {
        maxi=max(maxi,ans);
        return 0;
    }
    maxi=max(maxi,ans);
    ans=ans+root->val;
    maxPathSum(root->left,ans);
    maxPathSum(root->right,ans);
    ans=ans-root->val;

return maxi;
}
    int maxPathSum(TreeNode* root) {
        if(root==NULL)
        {
            return 0;
        }
        maxi=INT_MIN;
        int temp1=maxPathSum(root->left,0);
        maxi=INT_MIN;
        int temp2=maxPathSum(root->right,0);
        
      res=max(res,root->val+temp1+temp2);
      cout<<res;
    maxPathSum(root->left);
      maxPathSum(root->right);
      return res;
    }
};