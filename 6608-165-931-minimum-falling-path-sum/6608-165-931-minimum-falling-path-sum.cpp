class Solution {
public:
    int minFallingPathSum(vector<vector<int>>& matrix) {
        int n = matrix.size();
        int m = matrix[0].size();
        vector<int> prev(m,0);
        vector<int> curr(m,0);

        for(int j=0; j<m; j++){
            prev[j] = matrix[0][j];
        }
        for(int i=1; i<n; i++){
            for(int j=0; j<m; j++){
                int up = matrix[i][j] + prev[j];
                int leftDia = matrix[i][j];
                if(j-1>=0){
                    leftDia += prev[j-1];
                }else{
                    leftDia += 1e9;
                }

                int rightDia = matrix[i][j];
                if(j+1 <m){
                    rightDia += prev[j+1];

                }else{
                    rightDia += 1e9;
                }
                curr[j] = min(up , min(leftDia, rightDia));
            }
            prev = curr;
        }
        int mini = INT_MAX;
        for(int j=0; j<m; j++){
            mini = min(mini, prev[j]);
        }
        return mini;
    }
};