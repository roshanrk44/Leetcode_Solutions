class Solution {
public:
    int countWords(vector<string>& words1, vector<string>& words2) {
        unordered_map<string,int> temp1;
        unordered_map<string,int> temp2;
        for(int i=0;i<words1.size();i++)
        {
            temp1[words1[i]]++;
        }
        for(int i=0;i<words2.size();i++)
        {
            temp2[words2[i]]++;
        }
        int ans=0;
         for(int i=0;i<words1.size();i++)
        {
           if( temp1[words1[i]]==1&&temp2[words1[i]]==1)
           {
               ans++;
           }
        }
        
return ans;
    }
};