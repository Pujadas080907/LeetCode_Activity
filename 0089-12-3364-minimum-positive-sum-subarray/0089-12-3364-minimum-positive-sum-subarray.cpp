class Solution {
public:
    int minimumSumSubarray(vector<int>& nums, int l, int r) {
        int n = nums.size();
        int minSum = INT_MAX;
        int flag = false;

        for (int k = l; k <= r; k++) {
            int sum = 0;
            for (int i = 0; i < k; i++) {
                sum += nums[i];
            }
            if (sum > 0) {
                minSum = min(minSum, sum);
                flag = true;
            }

            for (int i = k; i < n; i++) {
                sum += nums[i];
                sum -= nums[i - k];
                if (sum > 0) {
                    minSum = min(minSum, sum);
                    flag = true;
                }
            }
        }
        return flag ? minSum : -1;
    }
};