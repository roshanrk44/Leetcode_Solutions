class Solution {
public:
    void nextPermutation(vector<int>& nums) {
      int idx=-1;
      for(int i=nums.size()-1;i>=1;i--)
      {
            if(nums[i]>nums[i-1])
            {
                idx=i;
                break;
            }
      }
      if(idx==-1)
      {
          return sort(nums.begin(),nums.end());
      }
      int n=INT_MAX,m;
      for(int i=idx;i<nums.size();i++)
      {
          if(nums[i]>nums[idx-1]){
          if(n>nums[i]-nums[idx-1])
          {
              m=i;
          }
          }
      }
      swap(nums[idx-1],nums[m]);
      reverse(nums.begin()+idx,nums.end());

    }
};