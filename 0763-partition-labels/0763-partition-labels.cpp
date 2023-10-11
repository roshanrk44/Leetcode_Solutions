class Solution {
public:
    vector<int> partitionLabels(string s) {
        unordered_map<char,int> temp;
        vector<int> ans;
        for(int i=0;i<s.size();i++)
        {
            temp[s[i]]=i;
        }
        int maxi=0,idx=0;
        for(int i=0;i<s.size();i++)
        {
            maxi=max(maxi,temp[s[i]]);
            if(i==maxi)
            {
                ans.push_back(i-idx+1);
                idx=i+1;
            }
        }
        return ans;

    }
};