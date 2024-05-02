class Solution {
public:
    string reversePrefix(string word, char ch) {
        string ans="";
        for(int i=0;i<word.size();i++)
        {
            ans.push_back(word[i]);
            if(word[i]==ch)
            {
                reverse(ans.begin(),ans.end());
                ans=ans+word.substr(i+1);
                break;

            }
        }
        return ans;
    }
};