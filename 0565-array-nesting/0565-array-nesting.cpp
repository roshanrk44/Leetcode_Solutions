class Solution {
public:
    int arrayNesting(vector<int>& nums) {
        int ans=INT_MIN;
        unordered_map<int,int> map;
        for(int i=0;i<nums.size();i++)
        {
        int temp=nums[i];
            int count=0;
        while(map[temp]<1)
        {
            map[temp]++;
            temp=nums[temp];
            count++;
        }
     ans=max(ans,count);
            
        }
        return ans;
    }
};