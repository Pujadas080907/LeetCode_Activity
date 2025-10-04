class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i=0, k=1;
        while(k<nums.size()){
            if(nums[i] != nums[k]){
                i++;
                nums[i] = nums[k];
            }
            k++;
        }
        return i+1;
    }
};
