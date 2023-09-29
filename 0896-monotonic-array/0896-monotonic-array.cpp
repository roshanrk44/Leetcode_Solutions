class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        if(nums.size()==1)
        {
            return true;
        }
        int num=0;
       for(int i=1;i<nums.size();i++)
       {
           if(nums[i-1]-nums[i]==0)
           {
               continue;
           }
           else if(num==0)
           {
               num=nums[i-1]-nums[i];
           }
           else if(num>0)
           {
               if(nums[i-1]-nums[i]<0)
               return false;
           }
           else if(num<0)
           {
               if(nums[i-1]-nums[i]>0)
               return false;
           }
       }
       return true;
    }
};