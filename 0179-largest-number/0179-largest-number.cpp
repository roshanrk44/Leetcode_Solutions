class Solution {
public:
static bool compare(string a,string b){
    // cout<<a+b<<" "<<b+a;
    return a+b > b+a;
}
    string largestNumber(vector<int>& nums) {
        vector<string> temp;
        for(int i=0;i<nums.size();i++)
        {
            temp.push_back(to_string(nums[i]));
        }
        sort(temp.begin(),temp.end(),compare);
        string res="";
        for(int i=0;i<temp.size();i++)
        {
            res+=temp[i];
        }
        if(res[0]=='0')
        return "0";
        else
        return res;
    }
};