class Solution {
public:
int rob(vector<int>& nums,int i,int ans,vector<int> &dp)
{
    if(i>=nums.size())
    {
        return 0;
    }
    if(dp[i]!=-1)
    {
return dp[i];
    }
    int x=0,y=0;
        x=nums[i]+rob(nums,i+2,ans,dp);
   y=rob(nums,i+1,ans,dp);
    ans=dp[i]=max(x,y);
    return ans;
}
    int rob(vector<int>& nums) {
        if(nums.size()==1)
        {
            return nums[0];
        }
        vector<int> nums1(nums.size()-1),dp1(nums.size()-1,-1),dp2(nums.size()-1,-1);
        vector<int> nums2(nums.size()-1);
        for(int i=0;i<nums.size()-1;i++)
        {
            nums1[i]=nums[i+1];
            nums2[i]=nums[i];
        }
        return max(rob(nums1,0,0,dp1),rob(nums2,0,0,dp2));
    }
};