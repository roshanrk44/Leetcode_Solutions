class Solution {
public:
    double maxAverageRatio(vector<vector<int>>& classes, int e) {
        priority_queue<pair<double,int>> q;
        for(int i=0;i<classes.size();i++)
        {
            double temp1=(double)((int)classes[i][0])/(double)((int)classes[i][1]);
            double temp2=(double)((int)(classes[i][0]+1))/(double)((int)(classes[i][1]+1));
            q.push({temp2-temp1,i});
        }
          for(int i=0;i<e;i++)
        {
            double temp=q.top().first;
            int ind=q.top().second;
            q.pop();
            classes[ind][0]+=1;
            classes[ind][1]+=1;
          double temp1=(double)((int)classes[ind][0])/(double)((int)classes[ind][1]);
            double temp2=(double)((int)(classes[ind][0]+1))/(double)((int)(classes[ind][1]+1));
            q.push({temp2-temp1,ind});
            
        }
        double sum=0;
        for(int i=0;i<classes.size();i++)
        {
            sum+=(double)classes[i][0]/(double)classes[i][1];
        }
        int size=classes.size();
        double avg=sum/size;
        return avg;
    }
};