class Solution {
public:
    vector<bool> checkArithmeticSubarrays(vector<int>& nums, vector<int>& l, vector<int>& r) {
        vector<bool> ans;
    for(int i=0;i<l.size();i++)
    {
        vector<int> temp;
        for(int j=l[i];j<=r[i];j++)
        {
            temp.push_back(nums[j]);
        }
        if(temp.size()==1)
        {
        ans.push_back(true);
        continue;
        }
        sort(temp.begin(),temp.end());
        int a=temp[1]-temp[0];
        int j=1;
        for(j=1;j<temp.size();j++)
        {
            if(temp[j]-temp[j-1]!=a)
            {
                ans.push_back(false);
                break;
            }
        }
        if(j==temp.size())
        ans.push_back(true);
    }
    return ans;
    }
};