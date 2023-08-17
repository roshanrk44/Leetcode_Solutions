class Solution {
public:
    vector<int> secondGreaterElement(vector<int>& nums) {
        int n=nums.size();
        stack<int>st1,st2,temp;
        vector<int>ans(n,-1);
        for(int i=0;i<n;i++)
        {
            while(!st2.empty()&& nums[st2.top()]<nums[i])
            {
                ans[st2.top()]=nums[i];
                st2.pop();
            }
             while(!st1.empty()&&nums[st1.top()]<nums[i]){
              temp.push(st1.top());
              st1.pop();
          }
                   while(!temp.empty()) {
              st2.push(temp.top());
              temp.pop();
          }
          st1.push(i);
        }
        return ans;
    }
};