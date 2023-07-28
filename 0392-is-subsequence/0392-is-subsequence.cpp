class Solution {
public:
    bool isSubsequence(string s, string t) {
        if(s.size()==0)
        {
            return 1;
        }
        if(t.size()==0)
        {
            return 0;
        }
        if(s[0]==t[0])
            return isSubsequence(s.substr(1), t.substr(1));
        else
            return isSubsequence(s, t.substr(1));
    }
};