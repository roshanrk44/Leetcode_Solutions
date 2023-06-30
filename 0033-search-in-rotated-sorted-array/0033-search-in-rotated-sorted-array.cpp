class Solution {
public:
    int search(vector<int>& nums, int target) {
        int temp=-1;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==target)
            {
                temp=i;
            }
        }
        return temp;

    }
};