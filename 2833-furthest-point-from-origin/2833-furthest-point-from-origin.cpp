class Solution {
public:
    int furthestDistanceFromOrigin(string moves) {
        int left=0,right=0;
        for(int i=0;i<moves.size();i++)
        {
            if(moves[i]=='R')
            {
                left++;
                right++;
            }
             else if(moves[i]=='L')
            {
                left--;
                right--;
            }
            else if(moves[i]=='_')
            {
                right++;
                left--;
            }
        }
        if(left<0)
        {
            left=-1*left;
        }
        if(right<0)
        {
            right=right*-1;
        }
        return max(left,right);
    }
};