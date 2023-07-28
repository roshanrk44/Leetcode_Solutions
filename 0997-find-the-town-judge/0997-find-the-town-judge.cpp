class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        int count=0;
         if(trust.size()==1)
            {
                return trust[0][1];
            }
            for(int j=1;j<=n;j++)
            {
                count=0;
        for(int i=0;i<trust.size();i++)
        {
            if(j!=trust[i][0]&&j==trust[i][1])
            {
                count++;
            }
            else if(j==trust[i][0])
            {
                count=0;
                break;
            }
        }
        if(count==n-1)
        return j;
            }
        return -1;
    }
};