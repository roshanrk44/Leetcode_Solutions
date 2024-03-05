class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_map<int,int> map;
        for(int i=0;i<nums.size();i++)
        {
            if(map[nums[i]]>0&&abs(map[nums[i]]-i-1)<=k)
            {
                return 1;
            }
            map[nums[i]]=i+1;
        }
        return 0;
    }
};