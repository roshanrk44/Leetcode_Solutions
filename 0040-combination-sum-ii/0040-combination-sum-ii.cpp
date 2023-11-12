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
    if(j>i&&candidates[j-1]==candidates[j])
    continue;
    temp.push_back(candidates[j]);
    sum+=candidates[j];
    solve(candidates,ans,temp,target,j+1,sum);
    sum-=temp[temp.size()-1];
    temp.pop_back();
}
}
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int> temp;
        sort(candidates.begin(),candidates.end());
        solve(candidates,ans,temp,target,0,0);
        return ans;
        
    }
};