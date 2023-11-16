class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        if(nums.size()==1)
        {
            return nums[0];
        }
        int start=0;
        int end=nums.size();
        int n= nums.size();
        while(start<=end)
        {
            int mid=start+(end-start)/2;
            if(mid==0&&nums[mid+1]!=nums[mid]||mid==n-1&&nums[mid-1]!=nums[mid])
            {
                    return nums[mid];
            }
            else if(nums[mid-1]!=nums[mid]&&nums[mid+1]!=nums[mid])
            {
                return nums[mid];
            }
            else if(nums[mid]==nums[mid+1])
            {
                if(mid%2==0)
                {
                    start=mid+1;
                }
                else
                {
                    end=mid-1;
                }
            }
            else if(nums[mid]==nums[mid-1])
            {
                 if(mid%2==1)
                {
                    start=mid+1;
                }
                else
                {
                    end=mid-1;
                } 
            }
        }
        return -1;
    }
};