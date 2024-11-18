class Solution {
public:
    int countValidSelections(vector<int>& nums) {
        int n = nums.size();
        vector<int> preSum(n+1, 0);
        for(int i=1; i<=n; i++)
        {
            preSum[i] = preSum[i-1]+nums[i-1];
        }
        int ans = 0;
        for(int i=1; i<=n; i++)
        {
            if(nums[i-1]==0)
            {
                int leftSum = preSum[i-1];
                int rightSum = preSum[n]-preSum[i-1];
                int diff = abs(leftSum - rightSum);
                if(diff==0)
                {
                    ans += 2;
                }else if(diff==1)
                {
                    ans++;
                }
            }
        }
        return ans;
    }
};