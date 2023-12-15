class Solution {
public:
    string destCity(vector<vector<string>>& paths) {
        unordered_map<string,pair<int,int>> map;
        for(int i=0;i<paths.size();i++)
        {
            map[paths[i][0]].first++;
            map[paths[i][0]].second=0;

            map[paths[i][1]].first++;
             map[paths[i][1]].second=1;


        }
        for(auto x:map)
        {
            if(x.second.first==1&&x.second.second==1)
            {
                return x.first;
            }
        }
        return "";
    }
};