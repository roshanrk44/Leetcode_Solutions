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
    int widthOfBinaryTree(TreeNode* root) {
        queue<pair<TreeNode*,long long int >> q;
        long long int ans=INT_MIN;
        q.push({root,0});
        while(!q.empty())
        {
            long long int count=q.front().second;
            int n=q.size();
            for(int i=0;i<n;i++)
            {
        TreeNode* head=q.front().first;
        long long int temp=q.front().second-count;
        q.pop();
       
                if(temp+1>ans)
                {
                    ans=temp+1;
                }
        if(head->left!=NULL)
        {
            q.push({head->left,(2*temp)});
        }
        if(head->right!=NULL)
        {
            q.push({head->right,(2*temp)+1});
        }
       
            }
        }
        return ans;
    }
};