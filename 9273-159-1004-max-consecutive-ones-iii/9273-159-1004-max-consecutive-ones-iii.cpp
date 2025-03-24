class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int n = nums.size();
        int maxLen = 0, Len = 0, left = 0, right = 0, Zero = 0;
        while(right<n){
            if(nums[right] == 0){
                Zero++;
            }
            if(Zero> k){
                if(nums[left] == 0)
                Zero--; 
                left++;
            }
            if(Zero<=k){
                Len = right - left + 1;
                maxLen = max(Len, maxLen);
            }
            right++;
        }
        return maxLen;
    }
};