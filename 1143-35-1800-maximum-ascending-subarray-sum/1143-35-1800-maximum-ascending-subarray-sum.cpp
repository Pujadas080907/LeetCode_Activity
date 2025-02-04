class Solution {
public:
    int maxAscendingSum(vector<int>& nums) {
        int maxSum = 0;
        for(int i=0; i<nums.size(); i++)
        {
            int currSum = nums[i];
            for(int j = i+1; j<nums.size() && nums[j] > nums[j-1] ; j++){
                currSum += nums[j];
            }
            maxSum = max(maxSum, currSum);
        }
        
        return maxSum;
    }
};