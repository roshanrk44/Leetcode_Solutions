// class Solution {
// public:

//     bool canJump(vector<int>& nums,int j,vector<int>&dp)
//     {
//         if(j>=nums.size()-1)
//         {
//             // ans=1;
//             return 1;
//         }
//         if(dp[j]!=-1)
//         {
//             return dp[j];
//         }
//          // bool ans=false;
     
//         for(int i=1;i<=nums[j];i++)
//         {
//             cout<<j+i;
//             if(canJump(nums,j+i,dp))
//            return dp[j]= 1;
           
//         }
//         // dp[j]=ans;
//         return dp[j]=false;
//     }
//     bool canJump(vector<int>& nums) {
//       int  n=nums.size();
//         vector<int> dp(n+1,-1);
//         return canJump(nums,0,dp);
//     }
// };
class Solution {
public:
    bool solve(vector<int>& nums, int index, vector<int> &dp) {
        if (index >= nums.size() - 1) {
            return true;
        }

        if(dp[index]!=-1){
            return dp[index];
        }
        
        for (int i = 1; i <= nums[index]; i++) {
            if (solve(nums, index + i, dp)) {
                return dp[index] = true;
            }
        }
        
        return dp[index] = false;
    }
    
    bool canJump(vector<int>& nums) {
        vector<int> dp(nums.size()+1, -1);
        return solve(nums, 0, dp);
    }
};