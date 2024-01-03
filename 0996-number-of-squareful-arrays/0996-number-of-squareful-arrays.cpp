class Solution {
public:
int ans=0;
bool check(int y, int z)
{
       int temp=sqrt(y+z);
       cout<<((temp*temp)==(y+z));
       return ((temp*temp)==(y+z));
}
void solve(vector<int> nums,int i)
{
    if(i>=nums.size())
    {
        ans++;
        return ;
    }
        // ans++;
    for(int j=i;j<nums.size();j++)
    {
        if(j==i|| nums[i]!=nums[j])
        {
        swap(nums[i],nums[j]);
        if(i==0||i>0&&check(nums[i-1],nums[i]))
        solve(nums,i+1);
        }
        // swap(nums[i],nums[j]);
    }
}
    int numSquarefulPerms(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        solve(nums,0);
        return ans;
    }
};