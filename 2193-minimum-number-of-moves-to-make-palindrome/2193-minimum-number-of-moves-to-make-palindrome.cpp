class Solution {
public:
    int minMovesToMakePalindrome(string s) {
       int low=0;
       int high=s.size()-1;
      int count=0;
      while(low<high)
      {
          if(s[low]==s[high])
          {
              low++;
              high--;
          }
          else
          {
              int idx1=-1;
              int idx2=-1;

              for(int i=low+1;i<high;i++)
              {
                  if(s[high]==s[i])
                  {
                      idx1=i;
                      break;
                    //   cout<<<<" "<<s[idx1];
                  }
              }
               for(int i=high-1;i>low;i--)
              {
                  if(s[low]==s[i])
                  {
                      idx2=i;
                      break;
                  }
              }
            //   cout<<abs(idx1-low)<<" "<<abs(idx2-high)<<" ";
            cout<<idx1<<" "<<idx2<<" ";
              if(idx1==-1)
              {
                  swap(s[high],s[high-1]);
                  count++;
                  continue;
              }
              if(idx2==-1)
              {
                  swap(s[low],s[low+1]);
                  
                  count++;
                  continue;
              }
              if(abs(idx1-low)<abs(idx2-high))
              {
                  for(int i=idx1-1;i>=low;i--)
                  {
                        swap(s[i],s[i+1]);
                        count++;
                  }
              }
              else
              {
                 for(int i=idx2+1;i<=high;i++)
                  {
                        swap(s[i],s[i-1]);
                        count++;
                  }  
              }
              
          }

      }
    
       return count; 
    }
};