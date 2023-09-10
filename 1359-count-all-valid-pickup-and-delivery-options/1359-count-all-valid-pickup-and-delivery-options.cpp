class Solution {
public:
    int countOrders(int n) {
        int mod=pow(10,9)+7;
        long long count=1;
        for(int i=2;i<=n;i++)
        {
            count=count*i*(i+(i-1))%mod;
        }
        return (int)count;
    }
};