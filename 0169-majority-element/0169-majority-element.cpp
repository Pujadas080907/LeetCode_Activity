class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int cnt = 0;
        int elem ;
        for(int i=0; i<nums.size(); i++){
            if(cnt == 0){
                cnt = 1;
                elem = nums[i];
            }else if(nums[i] == elem){
                cnt++;
            }else{
                cnt--;
            }
        }
         int cnt2 = 0;
        for(int i=0; i<nums.size(); i++){
           
            if(nums[i] == elem) cnt2++;
        }
        if(cnt2> (nums.size()/2))
        return elem;
        return 0;
    }
};