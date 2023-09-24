class Solution {
public:
    double champagneTower(int poured, int query_row, int query_glass) {
        vector<vector<double>> ans;
        double a=poured;
        for(int i=0;i<query_row+2;i++)
        {
             vector<double> temp;
           
             for(int j=0;j<i+1;j++)
             {
                   if(i==0)
             {
                 temp.push_back(a);
                 break;
             }
                 if(j==0||j==i)
                 {
                     if(ans[i-1][0]>1)
                     temp.push_back((ans[i-1][0]-1)/2);
                     else
                     temp.push_back(0);
                 }
                 else
                 {
                     if(ans[i-1][j-1]>1&&ans[i-1][j]>1)
                     temp.push_back(((ans[i-1][j-1]-1)/2)+((ans[i-1][j]-1)/2));
                     else if(ans[i-1][j-1]>1&&ans[i-1][j]<=1)
                     temp.push_back((ans[i-1][j-1]-1)/2);
                     else if(ans[i-1][j-1]<=1&&ans[i-1][j]>1)
                      temp.push_back((ans[i-1][j]-1)/2);
                     else
                     temp.push_back(0);
                 }
             }
             for(int j=0;j<i;j++)
             {
                 if(ans[i-1][j]>1)
                 ans[i-1][j]=1;
             }
             ans.push_back(temp);
        }
 
        return ans[query_row][query_glass];
    }
};