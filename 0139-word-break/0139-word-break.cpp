// class Solution {
// public:
//     bool wordBreak(string s, vector<string>& wordDict) {
//         int start=0,n=s.size();
//         string temp=s;
//         for(int i=1;i<=n;i++)
//         {
//             for(int j=0;j<wordDict.size();j++)
//             {
//                 if(s.substr(start,i-start)==wordDict[j])
//                 {
//                     start=i;
//                     if(i==n)
//                     {
//                         return true;
          
//                     }
//                     break;
//                 }
//             }
//         }
//         return false;
//     }
// };
class Solution {
public:
    bool wordBreak(string s, vector<string>& wordDict) {
        int n = s.size();
        unordered_map<string,int> st;
        for(int i=0;i<wordDict.size();i++)
        {
            st[wordDict[i]]++;
        }
        vector<int> dp(n+1,0);
        dp[0] = 1;
        for(int len = 1;len <= n;len++){
            for(int i = len - 1;i >=0;i--){
                if(dp[i]){
                   
                    string str = s.substr(i,len - i);
                    if(st[str]>0){
                        dp[len] = 1;
                        break;
                    }
                }
            }
        }
        return dp[n];
    }
};