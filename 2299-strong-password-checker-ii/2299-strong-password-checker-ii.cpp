class Solution {
public:
    bool strongPasswordCheckerII(string password) {
        if(password.size()<8)
        {
            return false;
        }
        string s="!@#$%^&*()-+";
        bool flag1=false,flag2=false,flag3=false,flag4=false;
        for(int i=0;i<password.size();i++)
        {
            if(i!=0)
            {
                if(password[i-1]==password[i])
                    return false;
            }
            if(password[i]>='a'&&password[i]<='z')
            {
                flag1=1;
            }
            else if(password[i]>='A'&&password[i]<='Z')
            {
                flag2=1;
            }
            else if(password[i]>='0'&&password[i]<='9')
            {
                flag3=1;
            }
            else
            {
                for(int j=0;j<12;j++)
                {
                    if(s[j]==password[i])
                    {
                        
                        flag4=1;
                    }
                }
            }

        }
        if(flag1==true&&flag2==true&&flag3==true&&flag4==true)
        {
            return true;
        }
        else 
        return false;

    }
};