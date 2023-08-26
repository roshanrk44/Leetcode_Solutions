class Solution {
public:
// int findLongestChain(vector<vector<int>>& pairs,int i,int prev)
// {
//     if(i==pairs.size())
//     {
//         return 0;
//     }
//     int ans=INT_MIN;
   
//         if(prev==-1||pairs[prev][1]<pairs[i][0])
//         {
//            ans=1+findLongestChain(pairs,i+1,i); 
//         }
//         int notans=findLongestChain(pairs,i+1,prev);
//         ans=max(ans,notans);
//     return ans;
// }
 static bool compare(vector<int>&v1,vector<int>&v2){
        return v1[1]<v2[1];
        
    }
    int findLongestChain(vector<vector<int>>& pairs) {
        sort(pairs.begin(),pairs.end(),compare);
        // return findLongestChain(pairs,0,-1);
         int prev=0;
        int res=1;
        for(int i=1;i<pairs.size();i++){
            if(pairs[prev][1]<pairs[i][0]){
                prev=i;
                res++;
            }
        }
        return res;
    }
    
};