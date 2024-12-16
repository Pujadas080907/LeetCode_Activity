class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> hashmp;
        for(int i=0; i<nums.size(); i++)
        {
            int needed = target - nums[i];
            if(hashmp.find(needed) != hashmp.end())
            {
                return {hashmp[needed],i};
            }
            hashmp[nums[i]] = i;
        }
        return {};
    }
};