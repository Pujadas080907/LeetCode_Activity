class Solution {
public:

    int cnt = 0;
    void dfs(int node, int parent, vector<vector<pair<int, int>>> &adj){
        for(auto it: adj[node]){
            int v = it.first;
            int check = it.second;
            if(v != parent){
                if(check == 1){
                    cnt++;
                }
                dfs(v,node,adj);
            }
        }
    }
    int minReorder(int n, vector<vector<int>>& connections) {
        vector<vector<pair<int,int>>> adj(n);
        for(auto& edge : connections){
            adj[edge[0]].push_back({edge[1], 1});
            adj[edge[1]].push_back({edge[0],0});
        }
        dfs(0,-1,adj);
        return cnt ;
    }
};