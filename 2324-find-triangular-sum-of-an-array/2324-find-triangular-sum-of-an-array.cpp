class Solution {
public:
    int triangularSum(vector<int>& nums) {
    
        while(nums.size()>1){
           vector<int> newNum;
           for(int i=0; i<nums.size()-1; i++){
              newNum.push_back((nums[i]+nums[i+1])%10);
           }
           nums = newNum;
        }
        return nums[0];
    }
    
};