class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int low=0,high=nums.size()-1,mid=0,ans=0;
       while (low <= high) {
        int mid = low + (high - low) / 2;
  if (target ==nums[mid]){
            return mid;
        }
    else if (target >nums[mid]){
            ans=mid+1;
              low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }   
        }
        return ans;
    }
};