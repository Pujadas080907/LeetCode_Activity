class Solution {
public:
    void sortColors(vector<int>& nums) {
        map<int,int> fr;
        vector<int> temp;
        for(auto it : nums){
            fr[it]++;
        }
        
        for(auto it : fr){
            int key = it.first;
            int size = it.second;
            while(size--){
                temp.push_back(key);
            }
        }
        nums = temp;
    }
};