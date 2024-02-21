class Solution {
public:
    int findLeastNumOfUniqueInts(vector<int>& arr, int k) {
        unordered_map<int,int> map;
        for(int i=0;i<arr.size();i++)
        {
            map[arr[i]]++;
        }
        vector<int> temp;
        for(auto x:map)
        {
            temp.push_back(x.second);
        }
        sort(temp.begin(),temp.end());
        int i;
        for(i=0;i<temp.size();i++)
        {
            if(k>=temp[i])
            {
                k-=temp[i];
            }
            else
            break;
        }
        return temp.size()-i;
    }
};