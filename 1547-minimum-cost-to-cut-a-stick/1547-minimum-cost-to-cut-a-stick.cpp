class Solution {
public:
int solve(vector<int> &cuts, int a, int b, int start,int end,vector<vector<int>> &dp)
{
if(a>b)
{
    return 0;
}
if(dp[a][b]!=-1)
return dp[a][b];
int ans=INT_MAX;
for(int i=a;i<=b;i++)
ans=dp[a][b]=min(ans,(end-start)+solve(cuts,a,i-1,start,cuts[i],dp)+solve(cuts,i+1,b,cuts[i],end,dp));
return ans;
}
    int minCost(int n, vector<int>& cuts) {
        vector<vector<int>> dp(101,vector(101,-1));
        sort(cuts.begin(),cuts.end());
        return solve(cuts,0,cuts.size()-1,0,n,dp);
    }
};