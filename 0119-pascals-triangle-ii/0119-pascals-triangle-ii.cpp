class Solution {
public:
    vector<int> getRow(int rowIndex) {
        double n;
        vector<int> ans(rowIndex+1);
       ans[0]=ans[rowIndex]=1;
       if(rowIndex==0)
       {
           return ans;
       }
       ans[1]=ans[rowIndex-1]=rowIndex;
        if(rowIndex==1)
       {
           return ans;
       }
        for(double i=2;i<=rowIndex/2;i++)
        {
        n=((ans[i-1]/i)*(ans[1]-i+1))+0.1;
           
        ans[i]=ans[rowIndex-i]=n;
        
        }
        return ans;
    }
};