class Solution {
public:
    int lengthOfLastWord(string s) {
        int ans=0;
        for(int i=s.size()-1;i>=0;i--)
        {
            if(ans!=0&&s[i]==' ')
            {
                break;
            }
            else
            {
                if(s[i]!=' ')
                {
                    ans++;
                }
            }
        }
        return ans;
    }
};