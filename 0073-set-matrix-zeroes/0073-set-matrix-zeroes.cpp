class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
      vector<int> x,y;
      for(int i=0;i<matrix.size();i++)
      {
          for(int j=0;j<matrix[0].size();j++)
          {
              if(matrix[i][j]==0)
              {
                  x.push_back(i);
                  y.push_back(j);
              }
          }
      }
      
      while(x.size()>0&&y.size()>0)
      {
          for(int i=0;i<matrix.size();i++)
          {
              matrix[i][y[y.size()-1]]=0;
          }
           for(int i=0;i<matrix[0].size();i++)
          {
              matrix[x[x.size()-1]][i]=0;
          }
          x.pop_back();
          y.pop_back();

      }  
    }
};