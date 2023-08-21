class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        int n=s.size();
         if(s.substr(0,n/2)==s.substr(n/2,n)) return true;
        for(int i=1;i<=s.size()/2;i++)
        {
            string x=s.substr(0,i);
            int j=0;
            for(j=0;j<s.size();j=i+j)
            {
                if(x!=s.substr(j,i))
                {
                    break;
                }   
            }
            if(j>=s.size())
            return true;
            
        }
        return false;
    }
};
