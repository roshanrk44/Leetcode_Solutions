class Solution {
public:
    int nthUglyNumber(int n) {
        priority_queue<long,vector<long>,greater<long>>q;
        q.push(1);
        while(n>1&&!q.empty())
        {
           long temp= q.top();
           q.pop();
           if(temp!=1&&temp==q.top())
           continue;
            q.push(temp*2);
            q.push(temp*3);
            q.push(temp*5);
            n--;
        }
        return q.top();
    }
};