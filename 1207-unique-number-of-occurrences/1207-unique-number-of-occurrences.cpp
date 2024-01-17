class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int,int> map;
        for(int i=0;i<arr.size();i++)
        {
            map[arr[i]]++;
        }
        vector<int> temp;
        for(auto x: map)
        {
            temp.push_back(x.second);
        }
        sort(temp.begin(),temp.end());
        for(int i=1;i<temp.size();i++)
        {
                if(temp[i-1]==temp[i])
                {
                    return false;
                }
        }
        return true;
    }
};