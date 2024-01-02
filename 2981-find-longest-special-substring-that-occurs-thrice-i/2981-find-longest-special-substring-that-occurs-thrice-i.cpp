class Solution {
public:
unordered_map<string,int> map;
int ans=-1;
    void solve(string s, int i, string temp)
    {
         if(i>=s.size())
        {
            
            return;
        }
        for(int j=i;j<s.size();j++)
        {
            if(s[j]==s[i])
            {
            temp=temp+s[j];
            map[temp]++;
            
        if(map[temp]>=3)
        {
            cout<<temp<<" ";
            int n=temp.size();
            ans=max(ans,n);
        }
            }
            else
            break;
        }
        temp="";
         solve(s,i+1,temp);
    }
    int maximumLength(string s) {
        solve(s,0,"");
        return ans;
    }
};