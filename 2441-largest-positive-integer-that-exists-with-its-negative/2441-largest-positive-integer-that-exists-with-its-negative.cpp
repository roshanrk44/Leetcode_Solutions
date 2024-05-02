class Solution {
public:
    int findMaxK(vector<int>& nums) {
        unordered_map<int,int> map;
        for(int i=0;i<nums.size();i++)
        {
            map[nums[i]]=1;
        }
        int ans=-1;
        for(int i=0;i<nums.size();i++)
        {
            if(ans<nums[i]&&map[(-nums[i])]==1)
            {
                ans=nums[i];
            }
        }
        return ans;
    }
};