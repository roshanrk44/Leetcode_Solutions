class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans;
        for(int i=0;i<nums1.size();i++)
        {
            int maxi=-1;
            bool flag=0;
            for(int j=0;j<nums2.size();j++)
            {
                    if(nums1[i]==nums2[j])
                    {
                        flag=1;
                    }
                    else if(flag==1&&nums1[i]<nums2[j])
                    {
                        maxi=nums2[j];
                        break;
                    }
                    cout<<maxi;
            }
            ans.push_back(maxi);
        }
        return ans;
    }
};