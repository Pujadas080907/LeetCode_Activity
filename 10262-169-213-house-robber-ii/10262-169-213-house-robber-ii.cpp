class Solution {
    private:
        int helper(vector<int>& nums) {
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
public:
    int rob(vector<int>& nums) {
        int n = nums.size();
        vector<int> arr1, arr2;
        if(n ==1) return  nums[0];
        for(int i=0; i<n; i++)
        {
            if(i != 0 ) arr1.push_back(nums[i]);
            if(i != n-1 ) arr2.push_back(nums[i]);

        }
        return max(helper(arr1), helper(arr2));
    }
};