class Solution {
public:
    int removeDuplicates(vector<int>& nums) 
    {
       int i=1,j=1,n=nums.size();
        while(j<n)
        {
            if(nums[j]==nums[j-1])
            {
                j++;
            }    
            else
            {
                nums[i++]=nums[j++];
            }
        }
        return i;
    }
};