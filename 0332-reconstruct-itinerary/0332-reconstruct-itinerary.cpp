class Solution {
public:
    vector<string> findItinerary(vector<vector<string>>& tickets) {
//         int n=tickets.size();
//         vector<bool> visited(n,0);
//         vector<string> ans;
//         int idx=0;
//       string a="JFK";
//         ans.push_back(a);
//         for(int i=0;i<n;i++)
//         {
//             string s="";
//             for(int j=0;j<n;j++)
//             {
//                 if(tickets[j][0]==ans[i]&&visited[j]!=1)
//                 {
//                     if(s.size()!=0&&tickets[j][0]==ans[i])
//                     {
//                         string comp=tickets[j][1];
//                         // if(s[0]<comp[0])
//                         // {
//                         //     break;
//                         // }
//                         if((s[0]>comp[0])||(s[0]==comp[0]&&s[1]>comp[1])||(s[0]==comp[0]&&s[1]==comp[1]&&s[2]>comp[2]))
//                         {
//                             s=comp;
//                             idx=j;
//                             break;
//                         }
//                     }
//                     else
//                     {
//                     s=tickets[j][1];
//                     idx=j;
//                     }
                    
//                 }
                
//             }
//             visited[idx]=1;
//             ans.push_back(s);
//         }

//         return ans;
        unordered_map<string, vector<string>> graph;
        
        for (auto& ticket : tickets) {
            graph[ticket[0]].push_back(ticket[1]);
        }
        
        for (auto& [_, destinations] : graph) {
            sort(destinations.rbegin(), destinations.rend());
        }
        
        vector<string> itinerary;
        
        function<void(const string&)> dfs = [&](const string& airport) {
            while (!graph[airport].empty()) {
                string next = graph[airport].back();
                graph[airport].pop_back();
                dfs(next);
            }
            itinerary.push_back(airport);
        };
        
        dfs("JFK");
        reverse(itinerary.begin(), itinerary.end());
        
        return itinerary;
    }
};