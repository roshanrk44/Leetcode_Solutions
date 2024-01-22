class Solution {
public:
    int semiOrderedPermutation(vector<int>& nums) {
        int a,b;
        for(int i=0;i<nums.size();i++)
        {
                if(nums[i]==1)
                {
                    a=i;
                }
                if(nums[i]==nums.size())
                {
                    b=i;
                }
        }
        int ans=0;
        if(b<a)
        {
            ans=a+(nums.size()-b-1)-1;
        }
        else
        {
            ans=a+(nums.size()-b-1);
        }
        return ans;
    }
};