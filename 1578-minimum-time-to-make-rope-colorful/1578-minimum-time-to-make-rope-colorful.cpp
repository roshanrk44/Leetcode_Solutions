class Solution {
public:
    int minCost(string colors, vector<int>& neededTime) {
        char prev=colors[0];
        int mini=neededTime[0];
        int ans=0;
        for(int i=1;i<colors.size();i++)
        {
              if(prev==colors[i])
              {
                  ans=ans+min(mini,neededTime[i]);
                 mini=max(mini,neededTime[i]);

              }
              else
              {
                  prev=colors[i];
                  mini=neededTime[i];
              }
        }
        return ans;
    }
};