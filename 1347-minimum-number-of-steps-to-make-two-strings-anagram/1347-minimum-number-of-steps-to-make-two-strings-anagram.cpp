class Solution {
public:
    int minSteps(string s, string t) {
        unordered_map<char,int> map;
        int count=0;
        for(int i=0;i<t.size();i++)
        {
            map[s[i]]++;
        }
        for(int i=0;i<t.size();i++)
        {
            if(map[t[i]]>0)
            {
                map[t[i]]--;
            }
            else
            count++;
        }

        return count;
    }
};