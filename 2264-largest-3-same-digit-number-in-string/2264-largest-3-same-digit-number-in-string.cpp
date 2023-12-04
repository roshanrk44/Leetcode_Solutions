class Solution {
public:
    string largestGoodInteger(string num) {
        string ans="";
        char temp='0'-1;
        for(int i=2;i<num.size();i++)
        {
            if(num[i-2]==num[i-1]&&num[i-1]==num[i])
            {
                if(temp<=num[i])
                temp=num[i];
            }
        }
        if(temp>='0'&&temp<='9')
        {
        ans.push_back(temp);
        ans.push_back(temp);
        ans.push_back(temp);
        }
return ans;
    }
};