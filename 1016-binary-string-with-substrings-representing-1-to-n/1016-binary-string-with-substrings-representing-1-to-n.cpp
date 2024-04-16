class Solution {
public:
string to_binary(int n)
{
    string s="";
    while(n>0)
    {
        if(n%2==0)
        {
            s+="0";
        }
        else
        {
            s+="1";
        }
        n=n/2;
    }
    reverse(s.begin(),s.end());
    return s;
}
    bool queryString(string s, int n) {
        // cout<<to_binary(n);
        for(int i=1;i<=n;i++)
        {
            string temp=to_binary(i);
            if(s.find(temp)!=string::npos)
            continue;
            return 0;
        }
        return 1;
    }
};