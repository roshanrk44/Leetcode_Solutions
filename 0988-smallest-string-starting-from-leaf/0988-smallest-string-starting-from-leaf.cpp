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
string ans="";
    void solve(TreeNode* root,string s)
    {
        if(root==NULL)
        {  
        return ;
        }
        s.push_back('a'+root->val);
         if(root->right==NULL&&root->left==NULL)
        {
            reverse(s.begin(),s.end());
            if(ans==""||ans>s)
            {
                ans=s;
            }
            // reverse(s.begin(),s.end());

        }
        solve(root->left,s);
        solve(root->right,s);
    }
    string smallestFromLeaf(TreeNode* root) {
       solve(root,"") ;
       return ans;
    }
};