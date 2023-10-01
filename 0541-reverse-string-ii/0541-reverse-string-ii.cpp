class Solution {
public:
    string reverseStr(string s, int k) {
        string ans="";
       for(int i=0;i<s.size();i=i+k)
       {
           if(i==0||i%(2*k)==0)
           {
string temp="";
               temp=s.substr(i,k);
               reverse(temp.begin(),temp.end());
               ans=ans+temp;
}
           else
               ans=ans+s.substr(i,k);

}
        return ans;
    }
};