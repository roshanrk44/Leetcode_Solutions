class Solution {
public:
    int countHomogenous(string s) {
        int mod=pow(10,9)+7;
        int ans=0;
        int i=0;
        cout<<s.size();
        while(i<s.size())
        {
            int count=1;
            int j=0;
            for(j=i+1;j<s.size();j++)
            {
                if(s[i]==s[j])
                {
                    count++;
                }
                else
                break;
            }
            i=j;
            for(j=1;j<=count;j++)
            {
                ans=(ans+count-j+1)%mod;
            }
        }
        return ans%mod;
    }
};