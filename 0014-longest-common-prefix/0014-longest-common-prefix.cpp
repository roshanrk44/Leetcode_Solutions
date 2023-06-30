class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string s="",temp=strs[0];
        if(strs.size()==1)
        {
            return strs[0];
        }
        for(int i=1;i<strs.size();i++)
        {
            s="";
            for(int j=0;j<temp.size();j++)
            { 
                if(temp[j]==strs[i][j])
                {
                    s=s+strs[i][j];
                }
                else
                break;
            }
             temp=s;
        }
        return s;
    }
};