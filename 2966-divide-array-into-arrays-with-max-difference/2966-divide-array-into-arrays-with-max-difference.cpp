class Solution {
public:
    vector<vector<int>> divideArray(vector<int>& nums, int k) {
        vector<vector<int>> ans;
        sort(nums.begin(),nums.end());
        vector<int> temp;
        int a=nums[0];

        for(int i=0;i<nums.size();i++)
        {
            if(temp.size()==3)
            {
                a=nums[i];
                ans.push_back(temp);
                temp.clear();
            }
            if(nums[i]-a<=k)
            {
                temp.push_back(nums[i]);
            }
            else
            {
                ans.clear();
                return ans;
            }
        }
        ans.push_back(temp);

        return ans;
    }
};