class Solution {
public:
    int minOperations(vector<vector<int>>& grid, int x) {
       int m = grid.size();
       int n = grid[0].size();
       vector<int> vec;
       for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            vec.push_back(grid[i][j]);
        }
       } 
       int result = 0;
       int L = vec.size();
       sort(begin(vec), end(vec));
       int target = vec[L/2];
       for(int &num : vec){
        if(num % x != target%x){
            return -1;
        }
        result += abs(target - num)/x;
       }
       return result;
    }
};