#include<bits/stdc++.h>
class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int count =0,j;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==target)
            {
                count++;
                j=i;
            }
          
        }
        if(count!=0)
        return {j-count+1,j};
        else
        return {-1,-1};
        
        


    }
};