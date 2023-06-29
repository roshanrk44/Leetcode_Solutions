#include<cmath>
class Solution {
public:
    int numberOfGoodSubarraySplits(vector<int>& nums) {
        bool istrue=false;
        int ans=0,count=1;
        int mod=1e9+7;
        for(int i=0;i<nums.size();i++)
        {
            if(istrue==true&&nums[i]==1)
            {
                ans=(((long)ans)*count)%mod;
                count=1;
            }
            else if(istrue==true&&nums[i]==0)
            {
                count++;
            }
            else if(nums[i]==1)
            {
                istrue=true;
                ans=1;
            }
          
        }
        return ans;


    }
};