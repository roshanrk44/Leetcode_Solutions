class Solution {
public:
    int maxLengthBetweenEqualCharacters(string s) {
        int ans=-1;
        vector<int> mp(26,-1);
        for(int i=0;i<s.size();i++)
        {
            if(mp[s[i]-'a']!=-1)
            {
                int temp=(i-mp[s[i]-'a']-1);
                ans=max(ans,temp);
            }
            else
            {
                mp[s[i]-'a']=i; 
            }
        }
        return ans;
    }
};