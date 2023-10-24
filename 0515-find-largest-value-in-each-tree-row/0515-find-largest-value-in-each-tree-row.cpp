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
    vector<int> largestValues(TreeNode* root) {
        vector<int>ans;
        if(root==NULL)
            return ans;
    queue<TreeNode*> q;
    q.push(root);
    int i=0;
        int k=1;
    while(q.size()!=0)
    {
        int j=0;
        int count=0;
        int tempo=INT_MIN;
        while(j<k)
        {
            TreeNode* temp=q.front();
            q.pop();
            if(temp!=NULL)
            {
            q.push(temp->left);
            q.push(temp->right);
            tempo=max(tempo,temp->val);
                count++;
            }
            j++;
        }
        k=count*2;
        // if(tempo!=INT_MIN)
        ans.push_back(tempo);
        i++;
    }
ans.pop_back();
     return ans;   
    }
};