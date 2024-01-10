class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
        queue<int> q;
        queue<int> s;
        for(int i=0;i<students.size();i++)
        {
            q.push(students[i]);
            s.push(sandwiches[i]);
        }
          for(int i=0;i<students.size()*students.size();i++)
        {
            if(q.empty())
            {
                continue;
            }
            if(q.front()==s.front())
            {
                q.pop();
                s.pop();
            }
            else
            {
                int temp=q.front();
                q.pop();
            q.push(temp);
            }
        }
        return q.size();
    }
};