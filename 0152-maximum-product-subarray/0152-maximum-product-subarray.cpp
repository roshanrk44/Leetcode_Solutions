class Solution {
public:

    int maxProduct(vector<int>& nums) {
        int temp=1,ans=INT_MIN;
        if(nums.size()==1)
        {
            return nums[0];
        }
        for(int i=0;i<nums.size();i++)
        {
            temp=temp*nums[i];
        }
        if(temp>0)
        {
            return temp;
        }
        
         for(int i=0;i<nums.size();i++)
         {
             temp=1;
             for(int j=i;j<nums.size();j++)
             {
                 temp=temp*nums[j];
                 ans=max(ans,temp);
             }
         }
         return ans;
       
    }
};