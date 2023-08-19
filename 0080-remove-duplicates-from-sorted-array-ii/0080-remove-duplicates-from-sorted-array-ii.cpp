class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int count=0,ans=0,num=nums[0];
        vector<int> res;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]!=num)
            {
                if(count>=2)
                {
                    ans=ans+2;
                    res.push_back(num);
                    res.push_back(num);

                }
                else{
                ans=ans+1;
                res.push_back(num);
                }
                count=0;
                num=nums[i];
            }
            count++;
        }
        if(count>=2)
        {
            ans=ans+2;
             res.push_back(num);
            res.push_back(num);
        }
        else{
                ans=ans+1;
                 res.push_back(num);
        }
        nums=res;
        cout<<res[0];

        return ans;
    }
};