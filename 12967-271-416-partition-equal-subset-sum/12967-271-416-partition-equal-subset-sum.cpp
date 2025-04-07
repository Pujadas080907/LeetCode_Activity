class Solution {
    private:
    bool isSubsetSum(vector<int>& arr, int sum) {
        int n = arr.size();
        vector<bool> prev(sum + 1, false), curr(sum + 1, false);
        prev[0] = true;

        if (arr[0] <= sum)
            prev[arr[0]] = true;

        for (int i = 1; i < n; i++) {
            curr[0] = true;
            for (int j = 1; j <= sum; j++) {
                bool notTake = prev[j];
                bool take = false;
                if (arr[i] <= j)
                    take = prev[j - arr[i]];
                curr[j] = take || notTake;
            }
            prev = curr;
        }

        return prev[sum];
    }
public:
    bool canPartition(vector<int>& nums) {
        int n = nums.size();
        int totalsum = 0;
        for(int i=0; i<n; i++){
            totalsum += nums[i];
        }
        if(totalsum % 2) return false;
        int target = totalsum/2;
        return isSubsetSum(nums,target);
    }
};