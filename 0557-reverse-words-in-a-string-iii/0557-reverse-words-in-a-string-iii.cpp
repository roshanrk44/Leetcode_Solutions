class Solution {
public:
    string reverseWords(string s) {
        string ans="";
        int idx=0;
        for(int i=0;i<s.size();i++)
        {
            if(i==s.size()-1)
            {
string temp="";
    temp=s.substr(idx,i+1-idx);
    reverse(temp.begin(),temp.end());
    ans=ans+temp;
}
else if(s[i]==' ')
{
string temp="";
    temp=s.substr(idx,i-idx);
    reverse(temp.begin(),temp.end());
    ans=ans+temp;
    idx=i+1;
    if(i!=s.size()-1)
    ans.push_back(' ');
}
}
        return ans;
    }
};