class Solution {
public:
bool solve(string s1, string s2, string s3, int i,int j,int s,vector<vector<int>> &dp)
{
    if(i>=s1.size()&& j>=s2.size()&&s>=s3.size())
    {
        return 1;
    }
    if(dp[i][j]!=-1)
    return dp[i][j];
    if(i<s1.size()&&j<s2.size()&&s1[i]==s3[s]&&s2[j]==s3[s])
    {
        return dp[i][j]=(solve(s1,s2,s3,i+1,j,s+1,dp)|| solve(s1,s2,s3,i,j+1,s+1,dp));
    }
    else if(i<s1.size()&&s1[i]==s3[s])
   return dp[i][j]= solve(s1,s2,s3,i+1,j,s+1,dp);
    else if(j<s2.size()&&s2[j]==s3[s])
    return dp[i][j]=solve(s1,s2,s3,i,j+1,s+1,dp);
    return dp[i][j]=0;


}
    bool isInterleave(string s1, string s2, string s3) {
        vector<vector<int>> dp(s1.size()+1,vector<int>(s2.size()+1,-1));
        return solve(s1,s2,s3,0,0,0,dp);
    }
};