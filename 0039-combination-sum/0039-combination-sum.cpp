class Solution {
public:
void solve(vector<int>& candidates,vector<vector<int>> &ans,vector<int> &temp,int target,int i,int sum)
{
if(sum==target)
{
    ans.push_back(temp);
}
if(sum>target)
return;
for(int j=i;j<candidates.size();j++)
{
    temp.push_back(candidates[j]);
    sum+=candidates[j];
    solve(candidates,ans,temp,target,j,sum);
    sum-=temp[temp.size()-1];
    temp.pop_back();
}
}
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int> temp;
        solve(candidates,ans,temp,target,0,0);
        return ans;
    }
};