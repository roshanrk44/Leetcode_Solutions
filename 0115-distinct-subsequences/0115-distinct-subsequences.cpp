class Solution {
public:
int numDistinct(string s, string t, int i, int j,vector<vector<int>>&dp)
{
    if(i==s.size() && j==t.size())
    {
        return 1;
    }
    if(i==s.size())
    {
        return 0;
    }
    if(j== t.size())
    {
        return 1;
    }
    if(dp[i][j]!=-1)
    {
        return dp[i][j];
    }
    if(s[i]==t[j])
    {
        return dp[i][j]=numDistinct(s,t,i+1,j+1,dp)+numDistinct(s,t,i+1,j,dp);
    }
    return dp[i][j]=numDistinct(s,t,i+1,j,dp);
}
    int numDistinct(string s, string t) {
        vector<vector<int>>dp(s.length() + 1, vector<int>(s.length() + 1, -1));
return numDistinct(s,t,0,0,dp);  
    }
};