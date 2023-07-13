class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size()==1||nums.size()==0)
            return nums.size();
        sort(nums.begin(),nums.end());
        int ans=0,count=0;
        for(int i=1;i<nums.size();i++)
        {
            if(nums[i]-nums[i-1]==1)
            {
                count++;
                ans=max(ans,count);
            }
            else if(nums[i]-nums[i-1]==0)
                continue;
            else
            count=0;
        }
        return ans+1;
    }
};