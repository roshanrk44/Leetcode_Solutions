class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int threshold) {
        int avg=0;
        int ans=0;
        for(int i=0;i<k;i++)
        {
            avg+=arr[i];
        }
        if((avg/k)>=threshold)
        {
            ans++;
        }
        for(int i=k;i<arr.size();i++)
        {
            avg=avg-arr[i-k]+arr[i];
             if((avg/k)>=threshold)
        {
            ans++;
        }
        }
        return ans;
    }
};