class Solution {
public:
    int findSubstringInWraproundString(string s) {
        unordered_map<char,int> st;
         int ans=1;
         int count=1;
         st[s[0]]=1;
        for(int i=1;i<s.size();i++)
        {
            if(s[i]==(s[i-1]+1)||(s[i-1]=='z'&&s[i]=='a'))
            {
                count++;
            }
            else
            {
                count=1;
            }
         if(st[s[i]]<count)
         {
             ans+=count-st[s[i]];
             st[s[i]]=count;
         }

        }
        return ans;
    }
};