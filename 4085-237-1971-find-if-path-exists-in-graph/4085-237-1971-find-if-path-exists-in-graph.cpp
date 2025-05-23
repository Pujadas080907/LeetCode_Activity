class Solution {

    private:
    bool dfs(vector<vector<int>>& adj, vector<int>& vis, int s, int d){
        if(s == d) return true;
        vis[s] = 1;
        for(auto it : adj[s]){
            if(!vis[it]){
                if(dfs(adj,vis,it,d)){
                    return true;
                }
                
            }
           
        }
         return false;
    }

public:
    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
        vector<vector<int>> adj(n);
        for (auto& edge : edges) {
            adj[edge[0]].push_back(edge[1]);
            adj[edge[1]].push_back(edge[0]);
        }
        vector<int> vis(n,0);
        return dfs(adj,vis, source,destination);
    }
};