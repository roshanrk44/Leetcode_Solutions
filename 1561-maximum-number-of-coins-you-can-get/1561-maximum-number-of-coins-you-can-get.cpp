class Solution {
public:
    int maxCoins(vector<int>& piles) {
        sort(piles.begin(),piles.end());
        int n=piles.size();
        int ans=0;
        for(int i=n-1;i>=n/3;i--)
        {
            if((n-1)%2!=i%2)
            {
            ans+=piles[i];
            }

        }
        return ans;
    }
};