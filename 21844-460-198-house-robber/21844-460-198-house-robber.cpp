class Solution {
public:
    int rob(vector<int>& nums) {
        int n = nums.size();
        int prev = nums[0];
        int prev2 = 0;
        for(int i=1; i<n; i++)
        {
            int pick = nums[i];
            if(i>1)
            pick += prev2;
            int nonPick = prev;

            int curr = max(pick, nonPick);
            prev2 = prev;
            prev = curr;
        }
        return prev;
    }
};