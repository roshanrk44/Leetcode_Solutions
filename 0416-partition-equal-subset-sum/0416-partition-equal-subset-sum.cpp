class Solution {
public:
bool solve(vector<int>& nums, int i, int sum, vector<vector<int>> &dp)
{
    if(sum==0)
    return 1;
    if(i==nums.size()-1)
    {
        return nums[nums.size()-1]==sum;
    }
    if(dp[i][sum]!=-1)
        return dp[i][sum];
        bool x=false;
if(nums[i]<=sum)
    x=solve(nums,i+1,sum-nums[i],dp);
    bool y=solve(nums,i+1,sum,dp);
    return dp[i][sum]=(x||y);
}
    bool canPartition(vector<int>& nums) {
        int sum=0;
        for(int i=0;i<nums.size();i++)
        {
            sum+=nums[i];
        }
        if(sum%2!=0)
        return 0;
        vector<vector<int>> dp(nums.size(),vector<int>((sum/2)+1,-1));
        return solve(nums,0,sum/2,dp);
    }
};