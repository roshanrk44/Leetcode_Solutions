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
    TreeNode* createBinaryTree(vector<vector<int>>& d) {
        unordered_map<int,pair<TreeNode*,bool>> map;
        for(int i=0;i<d.size();i++)
        {
            if(map[d[i][0]].first==NULL)
            {
                TreeNode* newnode=new TreeNode(d[i][0]);
                map[d[i][0]].first=newnode;
               

            }
            if(map[d[i][1]].first==NULL)
            {
                TreeNode* newnode=new TreeNode(d[i][1]);
                map[d[i][1]].first=newnode;
            }
             map[d[i][1]].second=1;
             if(d[i][2]==1)
                {
                    map[d[i][0]].first->left=map[d[i][1]].first;
                }
                else
                {
                     map[d[i][0]].first->right=map[d[i][1]].first;
                }
        }
        TreeNode* ans=NULL;
              for(auto x: map)
              {
                  if(x.second.second==0)
                  {
                      ans=x.second.first;
                  }
              }  
    return ans;
    }
};