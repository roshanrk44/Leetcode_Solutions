class Solution {
public:
    double minimumAverage(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        double ans=100;
        for(int i=0;i<n/2;i++)
        {
            ans=min(ans,((double)nums[i]+(double)nums[n-1-i])/2.0);
        }
        return ans;
    }
};