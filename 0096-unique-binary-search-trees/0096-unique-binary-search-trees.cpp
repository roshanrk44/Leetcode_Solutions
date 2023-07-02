class Solution {
public:
 int numTrees(int n, vector<int>& output) {
      if(n<=1)
        {
            return 1;
        }
        if(output[n]!=-1)
        {
           return output[n];
        }
        int ans=0;
        for(int i=1;i<=n;i++)
        {
        ans=ans+( numTrees(i-1,output)* numTrees(n-i,output));

        }
        output[n]=ans;
        return ans;
 }
    int numTrees(int n) {
        vector<int> output(n+1,-1);
       return numTrees(n,output);

    }
};