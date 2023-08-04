class Solution {
public:
int solve(vector<vector<int>>& triangle,int ans,int i,int j,vector<vector<int>>& dp)
{
    if(i==triangle.size())
    {
        return 0;
    }
    if(dp[i][j]!=-1)
    {
        return dp[i][j];
    }
   int x=triangle[i][j]+ solve(triangle,ans,i+1,j+1,dp);
   int y=triangle[i][j]+ solve(triangle,ans,i+1,j,dp);
   ans=dp[i][j]=min(x,y);
   return ans;


}
    int minimumTotal(vector<vector<int>>& triangle) {
        int ans=0;
        int n=triangle.size();
        vector<vector<int>> dp(n+1,vector<int> (n+1,-1));
        return solve(triangle,ans,0,0,dp);
    }
};