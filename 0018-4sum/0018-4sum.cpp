class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        int n = nums.size();
        sort(nums.begin(), nums.end());
        vector<vector<int>> ans;

        for (int i = 0; i < n - 3; i++) {
            if (i > 0 && nums[i] == nums[i - 1]) continue; 
            for (int j = i + 1; j < n - 2; j++) {
                if (j > i + 1 && nums[j] == nums[j - 1]) continue; 
                long long sum = (long long)target - (long long)nums[i] - (long long)nums[j];
                int l = j + 1, h = n - 1;

                while (l < h) {
                    long long currentSum = (long long)nums[l] + (long long)nums[h];

                    if (currentSum < sum) {
                        l++;
                    } else if (currentSum > sum) {
                        h--;
                    } else {
                        ans.push_back({nums[i], nums[j], nums[l], nums[h]});
                        int tempidx = l, tempidx1 = h;
                        while (l < h && nums[l] == nums[tempidx]) l++;
                        while (l < h && nums[h] == nums[tempidx1]) h--; 
                    }
                }
            }
        }

        return ans;
    }
};
