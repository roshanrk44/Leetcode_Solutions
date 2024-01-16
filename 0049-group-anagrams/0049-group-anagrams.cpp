class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> ans;
        unordered_map<string,vector<string>> map;
        for(int i=0;i<strs.size();i++)
        {
            string temp=strs[i];
            sort(temp.begin(),temp.end());
            map[temp].push_back(strs[i]);
        }
        for(auto x:map)
        {
            ans.push_back(x.second);
        }
        return ans;
    }
};