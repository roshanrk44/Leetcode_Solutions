class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        int n=nums.size();
        vector<int> dp(n);
        dp[0]=1;
        int temp=0;
        for(int i=1;i<n;i++)
        {
            temp=0;
            for(int j=i-1;j>=0;j--)
            {
                if(nums[j]<nums[i])
                {
                    temp=max(dp[j],temp);
                }
            }
            dp[i]=temp+1;
        }
        int ans=0;
        for(int i=0;i<n;i++)
        {
            ans=max(ans,dp[i]);
        }
        return ans;
    }
};