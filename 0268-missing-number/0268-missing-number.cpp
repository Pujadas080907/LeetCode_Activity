class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        int sum = n*(n+1)/2;
        int elemsum = 0;
        for(int i = 0; i<n; i++)
        {
            elemsum += nums[i];
        }
        return sum - elemsum;
    }
};