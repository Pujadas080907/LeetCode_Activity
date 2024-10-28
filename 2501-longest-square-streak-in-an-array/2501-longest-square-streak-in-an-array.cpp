class Solution {
public:
    int longestSquareStreak(vector<int>& nums) {
        int anslen = 0;
        unordered_set<int> st(nums.begin(),nums.end());
        for(int it : nums)
        {
            int currlen = 0;
            long long curr = it;
            while(st.find((int)curr) != st.end()){
                currlen++;
                if(curr*curr>1e5) break;
                curr *= curr;
            }
            anslen = max(anslen, currlen);
        }
        return anslen <2 ? -1 : anslen;
    }
};