class Solution {
public:
    int partitionString(string s) {
        unordered_map<char,int> temp;
        int count=1;
        for(int i=0;i<s.size();i++)
        {
            if(temp[s[i]]==0)
            {
                temp[s[i]]++;
            }
            else
            {
                cout<<i;
                count++;
                temp.clear();
                temp[s[i]]++;
            }
        }
        return count;
    }
};