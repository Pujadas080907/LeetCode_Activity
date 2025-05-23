class Solution {
    void dfs(vector<vector<int>>& rooms, int node, vector<int>& vis){
        vis[node] = true;
        for(auto it : rooms[node]){
            if(!vis[it]){
                dfs(rooms, it, vis);
            }
        }
    }
public:
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        int V = rooms.size();
        vector<int> vis(V, false);
        dfs(rooms,0,vis);
        for(bool check : vis){
            if(check == false)
            return false;
        }
        return true;
    }
};