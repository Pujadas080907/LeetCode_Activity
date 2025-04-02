class Solution {
public:
    long long maximumTripletValue(vector<int>& nums) {
        int n = nums.size();
        long long ans = 0;
        long long maxD = 0, maxi = 0;
        for(int k = 0; k<n; k++){
            ans = max(ans, maxD * nums[k]);
            maxD = max(maxD, maxi - nums[k]);
            maxi = max(maxi, (long long)nums[k]);
        }
        return ans;
        
    }
};