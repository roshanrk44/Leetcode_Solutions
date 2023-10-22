class Solution {
public:
    int maximumScore(vector<int>& nums, int k) {
        vector<int> temp;
        temp=nums;
        int ans=INT_MIN;
        for(int i=k-1;i>=0;i--)
        {
            temp[i]=min(temp[i+1],temp[i]);
        }
        for(int i=k+1;i<nums.size();i++)
        {
            temp[i]=min(temp[i-1],temp[i]);
        }
        int l=0,r=nums.size()-1;
        while(l<=r)
        {
            ans=max(ans,(min(temp[l],temp[r]))*(r-l+1));
            if(temp[l]>=temp[r])
                r--;
            else
                l++;
        }
        return ans;
    }
};