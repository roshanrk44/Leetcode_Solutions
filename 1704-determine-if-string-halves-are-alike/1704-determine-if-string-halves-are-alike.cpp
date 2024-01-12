class Solution {
public:
    bool halvesAreAlike(string s) {
        int n=s.size();
        string temp1=s.substr(0,n/2);
        string temp2=s.substr((n/2),n/2);
        int count1=0,count2=0;
        for(int i=0;i<n/2;i++)
        {
            if(temp1[i]=='a'||temp1[i]=='e'||temp1[i]=='i'||temp1[i]=='o'||temp1[i]=='u'||temp1[i]=='A'||temp1[i]=='E'||temp1[i]=='I'||temp1[i]=='O'||temp1[i]=='U')
            {
                    count1++;
            }
             if(temp2[i]=='a'||temp2[i]=='e'||temp2[i]=='i'||temp2[i]=='o'||temp2[i]=='u'||temp2[i]=='A'||temp2[i]=='E'||temp2[i]=='I'||temp2[i]=='O'||temp2[i]=='U')
            {
                    count2++;
            }
        }
        return count1==count2;
    }
};