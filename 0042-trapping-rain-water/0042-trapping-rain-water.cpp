class Solution {
public:
    int trap(vector<int>& height) {
        int temp=0,ans=0,i=0,comp;
        int maxvec=*max_element(height.begin(),height.end());
        while(height[i]<maxvec)
        {
            if(height[i]>temp)
            {
                temp=height[i];
            }
            else
            {
                ans=ans+temp-height[i];
            }
            i++;
        }
        comp=i;
        i=height.size()-1;
        temp=0;
        while(height[i]<maxvec)
        {
            if(height[i]>temp)
            {
                temp=height[i];
            }
            else
            {
                ans=ans+temp-height[i];
            }
            i--;
        }
        if(comp-i!=0)
        {
           for(int j=comp;j<i;j++)
           {
               ans=ans+maxvec-height[j];
           } 
        }
         return ans;
    }
   
};