class Solution {
public:
    int longestValidParentheses(string s) {
      stack<int> temp;
      int ans=0;
      int inval=-1;
      for(int i=0;i<s.size();i++)
      {
          if(s[i]=='(')
          {
              temp.push(i);
          }
          else
          {
              if(temp.size()==0)
              {
                  inval=i;
              }
              else
              {
                  temp.pop();
                  if(temp.size()==0)
                  {
                      ans=max(ans,i-inval);
                  }
                  else
                  {
                      ans=max(ans,i-temp.top());
                  }
              }
          }
      }
      return ans;
    }
};