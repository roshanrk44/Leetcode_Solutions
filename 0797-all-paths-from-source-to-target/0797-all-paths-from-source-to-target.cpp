class Solution {
public:
 
void solve(vector<vector<int>>& graph,vector<vector<int>>&ans,int src,int des,vector<int>&temp)
{
    temp.push_back(src);
    if(src==des)
    {
        ans.push_back(temp);
        temp.pop_back();
        return;
    }
   
    for(int i=0;i<graph[src].size();i++)
    {
        
        solve(graph,ans,graph[src][i],des,temp);
    }
    temp.pop_back();
}
    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {
        vector<vector<int>> ans;
        vector<int> temp;
        int n=graph.size();
        solve(graph,ans,0,n-1,temp);
        return ans;
    }
};