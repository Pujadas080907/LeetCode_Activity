class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {
        int n = nums.size();
        long long ans = 0; long long windsum = 0;
        unordered_set<int> st;
        int i=0; int j=0;
        while(j<n)
        {
                while(st.count(nums[j]))
                {
                    windsum -= nums[i];
                    st.erase(nums[i]);
                    i++;
                }
                windsum +=nums[j];
                st.insert(nums[j]);
                if(j-i+1 == k)
                {
                    ans = max(windsum, ans);
                    windsum -= nums[i];
                    st.erase(nums[i]);
                    i++;
                }
                j++;
        }
        return ans;
    }
};