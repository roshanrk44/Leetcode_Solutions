class Solution {
public:
// int ans=0;
int solve(vector<int>& coins, int amount, int i, vector<vector<int>> &dp)
{
    if(amount==0)
    {
        return 0;
    }
if(i>=coins.size())
{
    return 1e9;
}
if(amount<0)
{
    return 1e9;
}
if(dp[i][amount]!=-1)
{
    return dp[i][amount];
}

int x=1+solve(coins,amount-coins[i],i,dp);
int y=solve(coins,amount,i+1,dp);
int ans=dp[i][amount]=min(x,y);
return ans;
}
    int coinChange(vector<int>& coins, int amount) {
        vector<vector<int>> dp(coins.size(),vector<int>(amount+1,-1));
        int res=solve(coins,amount,0,dp);
        if(res==1e9)
        {
            return -1;
        }
        else
        return res;
    }
};