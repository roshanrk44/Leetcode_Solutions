class Solution {
public:
    int nthSuperUglyNumber(int n, vector<int>& primes) {
        priority_queue<long,vector<long>,greater<long>> q;
        q.push(1);
        while(n>1)
        {
            long temp = q.top();
            cout<<temp;
            q.pop();
            if(temp==q.top()&&!q.empty())
            continue;
            for(int i=0;i<primes.size();i++)
            {
                q.push(primes[i]*temp);
            }
            n--;
        }
        return q.top();
    }
};