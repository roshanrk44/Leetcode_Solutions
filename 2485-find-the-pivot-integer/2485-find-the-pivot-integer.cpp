class Solution {
public:
    int pivotInteger(int n) {
        for(int i=1;i<=n;i++)
        {
            if(((n-i+1)*(2*i+(n-i))/2)==(i*(2+(i-1))/2))
            {
                return i;
            }
        }
        return -1;
    }
};