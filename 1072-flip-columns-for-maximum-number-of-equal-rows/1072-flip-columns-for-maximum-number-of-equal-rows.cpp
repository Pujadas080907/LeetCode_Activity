class Solution {
public:
    int maxEqualRowsAfterFlips(vector<vector<int>>& matrix) {
        unordered_map<string, int> mp;
        for(auto& currR : matrix)
        {
            string b = "";
            for(int i=0; i<currR.size(); i++)
            {
                if(currR[0] == currR[i])
                {
                    b +="T";
                }
                else
                {
                    b += "F";
                }
            }
            mp[b]++;
        }
        int maxi = 0;
        for(auto& it: mp)
        {
            maxi = max(it.second, maxi);
        }
        return maxi;
    }
};