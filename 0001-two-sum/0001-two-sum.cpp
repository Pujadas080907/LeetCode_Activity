class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        for(int startIndex = 0; startIndex<n; startIndex++)
        {
            for(int nextIndex = startIndex+1; nextIndex<n; nextIndex++)
            {
                if(nums[startIndex ]+nums[nextIndex] == target)
                {
                    
                    return {startIndex, nextIndex};
                }
            }
        }
        return {};
    }
};