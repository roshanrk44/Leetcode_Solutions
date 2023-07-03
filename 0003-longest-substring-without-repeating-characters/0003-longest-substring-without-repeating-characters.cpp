class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector<int> temp(256,-1);
        int length=INT_MIN;
        int l=-1;
        if(s.size()==0||s.size()==1)
        {
            return s.size();
        }
        for(int i=0;i<s.size();i++)
        {
             if(temp[s[i]]>l)
            {
                l=temp[s[i]];
            }
            temp[s[i]]=i;
            length=max(length,i-l); 
        }
        return length;
    }
};