class Solution {
public:

vector<int> solve(string s)
{
    vector<int> ans;
    int n=s.size();
    for(int j=0;j<n;j++)
    {
        if(s[j]=='+'||s[j]=='-'||s[j]=='*')
        {
            vector<int> s1=solve(s.substr(0,j));
            vector<int> s2=solve(s.substr(j+1));
            for(int i=0;i<s1.size();i++)
            {
                for(int k=0;k<s2.size();k++)
                {
                 if(s[j]=='-')
                 {
                     cout<<s1[i]-s2[k]<<" ";
                    ans.push_back(s1[i]-s2[k]);
                }
                else if(s[j]=='+')
                {
                     cout<<s1[i]+s2[k]<<" ";

                    ans.push_back(s1[i]+s2[k]);
                }
                else
                {
                     cout<<s1[i]*s2[k]<<" ";

                    ans.push_back(s1[i]*s2[k]);
                }
                }
            }
           
        }
    }
    if(ans.size()==0)
    {
        ans.push_back(stoi(s));
    }
    return ans;
}
    vector<int> diffWaysToCompute(string s) {
      return solve(s);
    }
};