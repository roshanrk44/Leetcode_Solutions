class Solution {
public:
int solve(vector<vector<int>>& Grid, int i ,int j,int m,int n, vector<vector<int>>&dp)
{
    if(i==m-1&&j==n-1)
    {
      
        return 1;
    } 
    if(i>=m||j>=n)
    {
        return 0;
    }
    if(Grid[i][j]==1)
    {
        return 0;
    }
    if(dp[i][j]!=-1)
    {
        return dp[i][j];
    }
   

   int ans=dp[i][j]=solve(Grid,i+1,j,m,n,dp)+solve(Grid,i,j+1,m,n,dp);
   
    return ans;
}
    int uniquePathsWithObstacles(vector<vector<int>>& Grid) {
        int m=Grid.size();
        int n=Grid[0].size();
        if(Grid[m-1][n-1]==1)
        {
            return 0;
        }
        vector<vector<int>>dp(m+1,vector<int>(n+1,-1));
        return solve(Grid,0,0,m,n,dp);
    }
};