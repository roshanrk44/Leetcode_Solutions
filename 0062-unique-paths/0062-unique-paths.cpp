class Solution {
public:
int dp(int m,int n,vector<vector<int>>& ans,int i,int j)
{
    if(i==m-1&&j==n-1)
{
    return 1;

}
if(i>=m||j>=n)
{
    return 0;
}

    if(ans[i][j]!=-1) 
    return ans[i][j];
        else 
        return ans[i][j] = dp(m,n,ans,i+1,j)+dp(m,n,ans,i,j+1);


}
    int uniquePaths(int m, int n) {
        vector<vector<int>> ans(m+1,vector<int>(n+1,-1));
        int i=0;
        int j=0;
       int num=dp(m,n,ans,i,j);
        if(m==1 &&n==1) return num;
        return ans[0][0];
    }
};