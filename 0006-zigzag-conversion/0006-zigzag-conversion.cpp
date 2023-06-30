class Solution {
public:
    string convert(string s, int numRows) {
        if(numRows == 1) return s;
        int n = s.length();
        string ans = "";

        //For between pillars, next char is at: idx + 2 * (numRows - 2 - i) + 1 + 1
        //For pillars, next char is at: idx + 2 * (numRows - 2) + 1 + 1
        for(int i = 0; i < numRows; ++i){
            int p = i;
            while(p < n){
                ans += s[p];
                //Only rows between first and last will have extra character
                if(i != 0 && i != numRows - 1){
                    int t = 2 * (numRows - 2 - i) + 2;
                    if(p + t < n) ans += s[p + t];
                }
                p += 2 * (numRows - 2) + 2;
            }
        }
        return ans;
    }
};