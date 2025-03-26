class Solution {
private:
    int helper(vector<int>& nums, int goal) {
        if (goal == 0) return 0;
        int left = 0, right = 0, cnt = 0;
        unordered_map<int, int> freq;
        
        while (right < nums.size()) {
            freq[nums[right]]++;
            
            while (freq.size() > goal) {
                freq[nums[left]]--;
                if (freq[nums[left]] == 0) 
                    freq.erase(nums[left]);
                left++;
            }
            
            cnt += (right - left + 1);
            right++;
        }
        return cnt;
    }

public:
    int subarraysWithKDistinct(vector<int>& nums, int k) {
        return helper(nums, k) - helper(nums, k - 1);
    }
};
