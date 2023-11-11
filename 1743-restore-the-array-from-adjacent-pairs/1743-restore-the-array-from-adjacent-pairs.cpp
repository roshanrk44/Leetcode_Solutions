class Solution {
public:
    vector<int> restoreArray(vector<vector<int>>& adjacentPairs) {
         vector<int> ans;
         int n=adjacentPairs.size();
         unordered_map<int,vector<int>> temp;
        for(int i=0;i<n;i++)
        {
            vector<int> a;
            a=temp[adjacentPairs[i][0]];
            a.push_back(adjacentPairs[i][1]);
            temp[adjacentPairs[i][0]]=a;
            vector<int> b;
            b=temp[adjacentPairs[i][1]];
            b.push_back(adjacentPairs[i][0]);
            temp[adjacentPairs[i][1]]=b;
        }
        int ind;
        for(auto x:temp)
        {
            if(x.second.size()==1)
            {
                    ind=x.first;
                    break;
            }
        }
        ans.push_back(ind);
        ans.push_back(temp[ind][0]);
        for(int i=1;i<n;i++)
        {
            if(ans[i-1]==temp[ans[i]][0])
            {
                ans.push_back(temp[ans[i]][1]);
            }
            else
                ans.push_back(temp[ans[i]][0]);


        }
return ans;
    }
};