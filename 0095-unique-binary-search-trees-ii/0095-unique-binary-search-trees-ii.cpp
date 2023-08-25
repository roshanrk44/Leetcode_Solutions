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
 vector<TreeNode*> generateTrees(int n,int j)
{
    vector<TreeNode*> ans;
if(j>n)
        {
            ans.push_back(NULL);
            return ans;
        }
        
        for(int i=j;i<=n;i++)
        {
            vector<TreeNode*> left=generateTrees(i-1,j);
            vector<TreeNode*> right=generateTrees(n,i+1);
            for(int m=0;m<left.size();m++)
            {
                TreeNode* leftside=left[m];
                for(int n=0;n<right.size();n++)
                {
                    TreeNode* rightside=right[n];
                    TreeNode* newnode= new TreeNode(i);
                    newnode->left=leftside;
                    newnode->right=rightside;
                    ans.push_back(newnode);
                }
            }
        }
        return ans;
       
}
    vector<TreeNode*> generateTrees(int n) {
        
        return generateTrees(n,1);
        
    }
};