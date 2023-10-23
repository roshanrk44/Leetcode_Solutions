class Solution {
public:
    bool isPowerOfFour(int n) {
        if(n==1)
        return true;
      double num=n;
      while(num>4)
      {
          num=num/4;
      }
      if(num==4)
      {
          return true;
      }
      else
      return false;
    }
};