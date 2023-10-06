class Solution {
public:
    int integerBreak(int n) {
        vector<int> temp(n+1,1);
        if(n>2)
        temp[3]=2;
        for(int i=4;i<=n;i++)
        {
            int x=INT_MIN;
            for(int j=1;j<=i;j++)
            {
                x=max(x,(i-j)*j);
                if(j<i)
                x=max(x,(i-j)*temp[j]);
            }
            temp[i]=x;
        }
        return temp[n];

    }
};