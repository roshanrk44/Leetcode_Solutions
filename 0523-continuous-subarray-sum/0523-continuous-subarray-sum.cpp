class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {
        int sum=0;
        unordered_map<int,int> mp;
        for(int i=0;i<nums.size();i++)
        {
            sum+=nums[i]%k;
            if(sum%k==0&&i>0)
            {
                return true;
            }  
            if(mp[sum%k]!=0&&(i+1-mp[sum%k]>=2))
            {
                    return true;
            }
            if(mp[sum%k]==0)
                mp[sum%k]=i+1; 
            }
        return 0;
    }
};