#include<cmath>
class Solution {
public:
    int reverse(int x) {
       int ans=0;
    while(x!=0)
        {
              if(-pow(2,31)/10 > ans||ans > (pow(2,31)-1)/10)
             return 0;
            ans=ans*10+(x%10);
           
            x=x/10;
        }
        
        return ans;
    
    
    }
};