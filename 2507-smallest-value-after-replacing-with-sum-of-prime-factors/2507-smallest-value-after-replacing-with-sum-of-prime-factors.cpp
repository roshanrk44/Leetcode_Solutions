class Solution {
public:
    int smallestValue(int n) {
int num=-1;
        while(num!=n)
        {
        int temp=0;
        int i=2;
        num=n;
      while(i<=n)
      {
              if(n%i==0)
              {
                  temp+=i;
                  n=n/i;
                  i=1;
              }  
          i++;
      }
      n=temp;
    }
      return n;
    }
};