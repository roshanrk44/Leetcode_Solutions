class Solution {
public:
    long long smallestNumber(long long num) {
        long long ans=0;
        if(num==0)
        return 0;
        if(num<0)
        {
            num=num*-1;
            priority_queue<int> q;
            while(num>0)
            {
                q.push(num%10);
                num=num/10;
            }
            while(!q.empty())
            {
                ans=ans*10+q.top();
                q.pop();
            }
            ans=ans*-1;
        }
        else
        {
            int count=0;
            priority_queue<int,vector<int>,greater<int>> q;
             while(num>0)
            {
                if(num%10==0)
                {
                    count++;
                }
                else
                q.push(num%10);
                num=num/10;
            }
            ans=ans*10+q.top();
                q.pop();
                for(int i=0;i<count;i++)
                {
                    ans=ans*10;
                }
            while(!q.empty())
            {
                ans=ans*10+q.top();
                q.pop();

            }
        }
        return ans;
    }
};