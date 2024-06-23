class Solution {
public:
    int minimumArea(vector<vector<int>>& grid) {
        int top=INT_MAX;
        int down=INT_MIN;
        int left=INT_MAX;
        int right=INT_MIN;
        for(int i=0;i<grid.size();i++)
        {
            for(int j=0;j<grid[i].size();j++)
            {
                if(grid[i][j]==1)
                {
                    top=min(top,i);
                    down=max(down,i);
                    left=min(left,j);
                    right=max(right,j);
                }                
            }
        }
        int ans=(down-top+1)*(right-left+1);
        return ans;
    }
};