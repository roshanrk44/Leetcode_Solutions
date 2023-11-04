//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
    public:
    //Function to find the maximum number of meetings that can
    //be performed in a meeting room.
    // int x;
    // int solve(int start[], int end[], int n, int i,int ans, int prev)
    // {
    //     if(i>=n)
    //     return 0;
        
    //     if(prev<start[i])
    //     x=1+solve(start,end,n,i+1,ans,end[i]);
    //     int y=solve(start,end,n,i+1,ans,prev);
    //     ans=max(x,y);
    //     return ans;
    // }
    int maxMeetings(int start[], int end[], int n)
    {
        // Your code here
        vector<pair<int,int>> pair;
        for(int i=0;i<n;i++)
        {
            pair.push_back({end[i],start[i]});
        }
        sort(pair.begin(),pair.end());
        
        // for(int i=0;i<n;i++)
        // {
            
        // }
        // int ans=0;
        // for(int i=0;i<n;i++)
        // {
            int prev=pair[0].first;
            int count=1;
            for(int j=1;j<n;j++)
            {
                if(prev<pair[j].second)
                {
                    count++;
                    prev=pair[j].first;
                }
            }
        //     ans=max(ans,count);
        // }
        // return solve(start,end,n,0,0,0);
        return count;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int start[n], end[n];
        for (int i = 0; i < n; i++) cin >> start[i];

        for (int i = 0; i < n; i++) cin >> end[i];

        Solution ob;
        int ans = ob.maxMeetings(start, end, n);
        cout << ans << endl;
    }
    return 0;
}
// } Driver Code Ends