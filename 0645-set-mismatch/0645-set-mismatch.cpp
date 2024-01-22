class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        unordered_map<int,int> map;
        for(int i=0;i<nums.size();i++)
        {
            map[nums[i]]++;
        }
        int a=0,b=0;
        for(int i=1;i<=nums.size();i++)
        {
            if(map[i]==0)
            {
                b=i;
            }
            if(map[i]==2)
            {
                a=i;
            }
            
        }
        return {a,b};
    }
};