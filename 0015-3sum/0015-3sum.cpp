class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        set<vector<int>> st;
        int n=nums.size();
        for(int i=0;i<n;i++)
        {
            int low=i+1,high=n-1;
            while(low<high)
            {
                int current=nums[i]+nums[low]+nums[high];
                if(current==0)
                {
                    vector<int> temp={nums[i],nums[low],nums[high]};
                    st.insert(temp);
                    low++;
                    high--;
                }
                else if(current<0)
                {
                    low++;
                }
                else
                {
                    high--;
                }
                

            }
        }
        vector<vector<int>> ans(st.begin(),st.end());
        return ans;
    }
};