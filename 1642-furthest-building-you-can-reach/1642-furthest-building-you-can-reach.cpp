class Solution {
public:
    int furthestBuilding(vector<int>& heights, int bricks, int ladders) {
        int n=heights.size();
        priority_queue<int,vector<int>,greater<int>> q;
        int i;
         for(i=1;i<n;i++)
        {
            if(heights[i]>heights[i-1])
            {
                q.push(heights[i]-heights[i-1]);
                if(q.size()>ladders&&q.top()<=bricks)
                {
                    bricks-=q.top();
                    q.pop();
                }
                else if(q.size()>ladders) break;
            }
        }
        return i-1;
    }
};