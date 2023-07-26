class Solution {
public:
    int rob(vector<int>& nums, int n ,vector<int> &dp)
    {
        if(n>=nums.size())
        {
            return 0;
        }
        if(dp[n]!=-1)
        {
            return dp[n];
        }
        int x=nums[n]+rob(nums,n+2,dp);
        int y=0+rob(nums,n+1,dp);
        int ans=dp[n]=max(x,y);
        return ans;

    }
    int rob(vector<int>& nums) {
        vector<int> dp(nums.size()+1,-1);
        return rob(nums,0,dp);
        // int count=0,ans=INT_MIN;
        // for(int i=0;i<2;i++)
        // {
        //     count=0;
        //     for(int j=i;j<nums.size();j=j+2)
        //     {
        //         count=count+nums[j];
        //     }
        //     ans=max(ans,count);
        // }
        // return ans;
    }
};