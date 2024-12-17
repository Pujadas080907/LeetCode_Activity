class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int n = nums.size();
        map<int,int> hashmap;
        for(int i=0; i<n; i++)
        {
            hashmap[nums[i]]++;
        }
        for(auto it : hashmap)
        {
            if(it.second >= 2)
            return it.first;
        }
        return -1;
    }
};