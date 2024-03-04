class Solution {
public:
int solve(vector<int>&nums,int l,int r,int sum, vector<vector<int>> &dp)
{
if(l>=r)
{
    return 0;
}
if(dp[l][r]!=-1)
{
    return dp[l][r];
}
int x=0,y=0,z=0;
if(nums[l]+nums[l+1]==sum)
{
x=1+solve(nums,l+2,r,sum,dp);
}

if(nums[l]+nums[r]==sum)
{
y=1+solve(nums,l+1,r-1,sum,dp);
}
if(nums[r]+nums[r-1]==sum)
{
z=1+solve(nums,l,r-2,sum,dp);
}
int ans=dp[l][r]=max(x,max(y,z));
return ans;
}
    int maxOperations(vector<int>& nums) {
        int n=nums.size()-1;
        vector<vector<int>> dp(n+1,vector<int>(n+1,-1));
    //   int res=max(solve(nums,0,n,nums[0]+nums[1],dp),max(solve(nums,0,n,nums[0]+nums[n],dp),solve(nums,0,n,nums[n]+nums[n-1],dp)));
    
    int x=solve(nums,0,n,nums[0]+nums[1],dp);
    for(int i=0;i<=n;i++)
    {
        for(int j=0;j<=n;j++)
        {
            dp[i][j]=-1;
        }
    }
    int y=solve(nums,0,n,nums[0]+nums[n],dp);
      for(int i=0;i<=n;i++)
    {
        for(int j=0;j<=n;j++)
        {
            dp[i][j]=-1;
        }
    }
    int z=solve(nums,0,n,nums[n]+nums[n-1],dp);
    int res=max(x,max(y,z));
      return res;
    }
};