class Solution {
public:
    vector<int> deckRevealedIncreasing(vector<int>& deck) {
        sort(deck.begin(),deck.end());
        queue<int>q;
        vector<int> ans(deck.size());
        for(int i=0;i<deck.size();i++)
        {
            q.push(i);
        }
        for(int i=0;i<deck.size();i++)
        {
            ans[q.front()]=deck[i];
            if(!q.empty()){
            q.pop();
            q.push(q.front());
            q.pop();
            }
        }
        return ans;
    }
};