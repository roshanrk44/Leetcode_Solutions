class Solution {
public:
    int strStr(string haystack, string needle) {
        if(needle.size()>haystack.size())
        {
            return -1;
        }
        if(needle==haystack)
        {
            return 0;
        }
        int ans=-1;
        for(int i=0;i<=haystack.size()-needle.size();i++)
        {
            if(haystack.substr(i,needle.size())==needle)
            {
                ans=i;
                break;
            }
            cout<<haystack.substr(i,needle.size())<<" ";
        }
        return ans;
    }
};