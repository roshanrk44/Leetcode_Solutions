class Solution {
public:
    void sortColors(vector<int>& nums) {
       int count=0,i=0; 
        while(i<3)
        {
            for(int j=0;j<nums.size();j++)
            {
                
                    if(i==nums[j])
                {
                   swap(nums[j],nums[count]); 
                        count++;
                }
            }
            i++;
        }
    }
};