class Solution {
public:
    vector<int> getSumAbsoluteDifferences(vector<int>& nums) {
        vector<int> ans;
        int n=nums.size();
      int sum=0;
      for(int i=0;i<nums.size();i++)
      {
          sum+=nums[i];
      }
      int fsum=0;
      int temp=0;
      for(int i=0;i<nums.size();i++)
      {
          temp=abs(fsum-(i*nums[i]));
            fsum+=nums[i];
          temp=temp+abs((sum-fsum)-((n-i-1)*nums[i]));
            ans.push_back(temp);
            temp=0;
      }
      return ans;
    }
};