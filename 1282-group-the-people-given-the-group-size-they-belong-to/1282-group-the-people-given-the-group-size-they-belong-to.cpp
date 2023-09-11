class Solution {
public:
    vector<vector<int>> groupThePeople(vector<int>& arr) {
        vector<vector<int>> temp(arr.size(),vector<int>(2));
      for(int i=0;i<arr.size();i++)
      {
          temp[i][0]=arr[i];
          temp[i][1]=i;
      }  
      sort(temp.begin(),temp.end());
      vector<vector<int>> ans;
      int j=0;
      while(j<arr.size())
      {
          vector<int> help;
          int n=temp[j][0];
      for(int i=0;i<n;i++)
      {
          help.push_back(temp[j][1]);
          j++;
          
      }
      ans.push_back(help);
      }
      return ans;

    }
};