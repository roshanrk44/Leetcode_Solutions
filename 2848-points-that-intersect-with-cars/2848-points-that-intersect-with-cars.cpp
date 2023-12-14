class Solution {
public:
    int numberOfPoints(vector<vector<int>>& nums) {
       sort(nums.begin(),nums.end());
       int ans=0;
       int temp=INT_MIN;
       for(int i=0;i<nums.size();i++)
       {
           if(temp<nums[i][0])
           {
               ans=ans+(nums[i][1]-nums[i][0])+1;
               temp=nums[i][1];
           }
           else if(temp>=nums[i][0] && temp<nums[i][1])
           {
               ans=ans+(nums[i][1]-temp);
               temp=nums[i][1];
           }
           
       }
       return ans; 
    }
};