class Solution {
public:

    int minOperations(vector<int>& nums, int k) {
set<int> bag;
int count=0;
for(int i=nums.size()-1;i>=0;i--)
{
    if(nums[i]<=k)
    {
        bag.insert(nums[i]);
    }
    count++;
    if(bag.size()==k)
    {
        return count;
    }
}
return count;
    }
};