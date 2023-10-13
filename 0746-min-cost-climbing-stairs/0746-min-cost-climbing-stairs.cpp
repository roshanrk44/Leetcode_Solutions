class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost,int i,vector<int>&dp) {
        if(i>=cost.size())
        {
            return 0;
        }
        if(dp[i]!=-1)
            return dp[i];
        int x=cost[i]+minCostClimbingStairs(cost,i+1,dp);
                int y=cost[i]+minCostClimbingStairs(cost,i+2,dp);
        return dp[i]= min(x,y);

    }
    int minCostClimbingStairs(vector<int>& cost) {
        vector<int> dp(cost.size()+1,-1);
        return min(minCostClimbingStairs(cost, 0,dp),minCostClimbingStairs(cost, 1,dp));
    }
};