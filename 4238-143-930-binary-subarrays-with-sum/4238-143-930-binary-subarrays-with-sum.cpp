class Solution {
    private:
    int helper(vector<int>& nums, int goal){
        if(goal<0) return 0;
        int n = nums.size();
        int left = 0, right = 0, sum =0, cnt = 0;
        while(right<n){
            sum += nums[right];
            while(sum> goal){
                sum -= nums[left];
                left++;
            }
            cnt += (right - left +1);
            right++;
        }
        return cnt;
    }
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        return helper(nums, goal) - helper(nums, goal -1);
    }
};