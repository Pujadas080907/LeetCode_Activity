class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int> ans(nums.size(),0);
        int posIdx = 0, negIdx = 1;
        for(auto it : nums){
            if(it<0){
                ans[negIdx] = it;
                negIdx += 2;
            }else{
                ans[posIdx] = it;
                posIdx +=2;
            }
        }
        return ans;
    }
};