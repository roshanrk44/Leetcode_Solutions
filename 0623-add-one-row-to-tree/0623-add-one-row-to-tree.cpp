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
    TreeNode* addOneRow(TreeNode* root, int val, int depth) {
        if(depth==1)
        {
            TreeNode* head=new TreeNode(val);
            head->left=root;
            return head;

        }
        queue<TreeNode*> q;
        q.push(root);
        int count=1;
        while(!q.empty())
        {
            int n=q.size();
            for(int i=0;i<n;i++)
            {
                TreeNode* temp = q.front();
                q.pop();
                if(temp->left!=NULL)
                {
                q.push(temp->left);
                TreeNode* prev=temp->left;
                if(count==depth-1)
                {
                    TreeNode* head=new TreeNode(val);
                    temp->left=head;
                    head->left=prev;
                }
                }
                else
                {
                    if(count==depth-1)
                    {
                         TreeNode* head=new TreeNode(val);
                    temp->left=head;
                    }
                }
                if(temp->right!=NULL)
                {
                q.push(temp->right);            
                     TreeNode* next=temp->right;
                if(count==depth-1)
                {
                    
                    TreeNode* head=new TreeNode(val);
                    temp->right=head;
                    head->right=next;
                }
                }
                else{
                    if(count==depth-1)
                    {
                        TreeNode* head=new TreeNode(val);
                    temp->right=head;
                    }
                }
                }
            
                count++;
            if(count>depth)
                break;
        }
        return root;
    }
};