class Solution {
public:
    int minimumTotal(vector<vector<int>>& tri) {
        int n = tri.size();
        vector<int> prev(n,0), cur(n,0);
        for(int j=0; j<n;j++){
            prev[j] = tri[n-1][j];
        }
        for(int i=n-2; i>=0; i--){
            for(int j=i; j>=0; j--){
                int down = tri[i][j] + prev[j];
                int dia = tri[i][j] + prev[j+1];
                cur[j] = min(down, dia);
            }
            prev=cur;
        }
        return prev[0];
    }
};