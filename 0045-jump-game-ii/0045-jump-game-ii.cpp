class Solution {
public:
int jump(vector<int>& nums,int n,vector<int>&dp)
{
    if(n>=nums.size()-1)
    {
        return 0;
    }
    if(dp[n]!=-1)
    return dp[n];
    int ans=1e5;
    for(int i=1;i<=nums[n];i++)
    {
    ans=min(ans,1+jump(nums,n+i,dp));

    }
    return dp[n]=ans;

}
    int jump(vector<int>& nums) {
        vector<int> dp(nums.size(), -1);
        return jump(nums,0,dp);
    }
};