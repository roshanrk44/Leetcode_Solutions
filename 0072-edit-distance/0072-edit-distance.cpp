class Solution {
public:
    int minDistance(string word1, string word2, vector<vector<int>>& output) {
        int m=word1.size(),n=word2.size();
          if(word1.size()==0||word2.size()==0)
        {
            return max(word1.size(),word2.size());
        }
        if(output[m][n]!=-1)
        return output[m][n];
        if(word1[0]==word2[0])
        {
            return minDistance(word1.substr(1), word2.substr(1),output);
        }
        int x,y,z;
       
            x=1+minDistance(word1.substr(1), word2,output);
            y=1+minDistance(word1, word2.substr(1),output);
            z=1+minDistance(word1.substr(1), word2.substr(1),output);

       int ans=min(x,min(y,z));
       output[m][n]=ans;
        return ans;
    }
    int minDistance(string word1, string word2) {
     vector<vector<int>> output(word1.size()+1,vector<int>(word2.size()+1,-1));
     return minDistance(word1, word2, output);
    }
};