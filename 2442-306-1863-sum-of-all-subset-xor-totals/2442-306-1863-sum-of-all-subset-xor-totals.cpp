class Solution {
public:
    int subsetXORSum(vector<int>& nums) {
        int n = nums.size();
        int ts = 0;
       
        for (int i = 0; i < (1 << n); i++) {
            int subsetXor = 0;
            for (int j = 0; j < n; j++) {
               
                if ((i & (1 << j)) != 0) {
                    subsetXor ^= nums[j];
                }
            }
            ts += subsetXor;
        }
        return ts;
    }
};