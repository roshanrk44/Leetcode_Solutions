class Solution {
public:
    string replaceWords(vector<string>& d, string s) {
        unordered_map<string,int> map;
        for(int i=0;i<d.size();i++)
        {
            map[d[i]]++;
        }
        int i=0;
        string ans="";
        string t="";
        while(i<s.size())
        {
           if(map[t]==0)
           {
                t.push_back(s[i]);
           }
            if(s[i]==' ')
            {
                if(map[t]>0)
                t.push_back(' ');
                ans+=t;
                t="";
            }
            i++;
        }
        ans+=t;

        return ans;
    }
};