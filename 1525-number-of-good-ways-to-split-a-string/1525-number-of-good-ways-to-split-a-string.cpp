class Solution {
public:
    int numSplits(string s) {
        unordered_map<char,int> map;
        int count1=0;
        for(int i=0;i<s.size();i++)
        {
            map[s[i]]=i;
        }
        set<char> st;
        for(int i=0;i<s.size();i++)
        {
            st.insert(s[i]);
        }
        int size=st.size();
        int count2=size;
        int ans=0;
        unordered_map<char,int> temp;
        for(int i=0;i<s.size();i++)
        {
            if(temp[s[i]]==0||map[s[i]]==i)
            {
                if(map[s[i]]>i)
                {
                    count1++;
                    temp[s[i]]++;
                }
                else if(map[s[i]]==i&&temp[s[i]]>0)
                {
                    count2--;
                }
                else if(map[s[i]]==i)
                {
                      count2--;
                    count1++;
                }
            }
            if(count1==count2)
            {
                cout<<i;
                ans++;
            }
        }
        return ans;
    }
};