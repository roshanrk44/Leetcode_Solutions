class Solution {
public:
    vector<vector<int>> findWinners(vector<vector<int>>& matches) {
        map<int,pair<int,int>> map;
        for(int i=0;i<matches.size();i++)
        {
            map[matches[i][0]].first++;
            map[matches[i][1]].second++;
        }
        vector<vector<int>> ans;
        vector<int>temp1;
        vector<int>temp2;

    for(auto x: map)
    {
        if(x.second.second==0)
        {
            temp1.push_back(x.first);
        }
        if(x.second.second==1)
        {
            temp2.push_back(x.first);
        }

    }
    ans.push_back(temp1);
    ans.push_back(temp2);
return ans;
    }
};