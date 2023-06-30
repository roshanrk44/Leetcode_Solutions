class Solution {
public:
    string longestPalindrome(string s) {
         int i,j,count=0,temp,num=0,temp1,temp2;
        for(i=0;i<s.length();i++)
        {
            for(int j=(s.length()-1);j>=i;j--)
            {
                if(s[i]==s[j]&&(j-i+1)>=count)
                {temp1=count;
                temp2=temp;
                    count=(j-i+1);
                    
                    temp=i;
                    for(int k=temp;k<(temp+count);k++)
                    {
                        if(s[k]!=s[count+(2*temp-k)-1])
                        { num++;
                            // break;
                        }
                        }
                    if(num>0)
                   { count=temp1;
                   temp=temp2;}
                    num=0;
                }
            }
             }
        for(int n=temp;n<=(temp+count);n++)
        {
            s[n-temp]=s[n];
        }
        if(count ==0)
        s.resize(1);
        else
        s.resize(count);

    return s;
    }
};
