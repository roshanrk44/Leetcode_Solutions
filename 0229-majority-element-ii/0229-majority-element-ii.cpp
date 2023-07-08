class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        unordered_map<int,int> temp;
        sort(nums.begin(),nums.end());
         vector<int> ans;
              if(nums.size()==1)
         return nums;
         if(nums.size()==2)
         {
             if(nums[0]==nums[1])
             {
             ans.push_back(nums[0]);
             return ans;
             }
             else
             return nums;
         }
       for(int i=0;i<nums.size();i++)
       {
           temp[nums[i]]++;
       }
       if(temp[nums[(nums.size()/3)]]>(nums.size()/3))
       ans.push_back(nums[(nums.size()/3)]);
       if(temp[nums[((nums.size())-(nums.size())/3)-1]]>(nums.size()/3))
       {
           if(ans.size()==1&&ans[0]!=nums[((nums.size())-(nums.size())/3)-1])
       ans.push_back(nums[((nums.size())-(nums.size())/3)-1]);
           else if(ans.size()==0)
               ans.push_back(nums[((nums.size())-(nums.size())/3)-1]);
               
       }
        return ans; 
    }
};