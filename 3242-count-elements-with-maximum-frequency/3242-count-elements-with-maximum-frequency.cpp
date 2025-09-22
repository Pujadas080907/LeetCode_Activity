class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        map<int,int> freq;
        for(auto it: nums){
            freq[it]++;
        }
        int maxi = 0;
        int ans = 0;
        for(auto it : freq){
            if(it.second > maxi){
                maxi = it.second;
            }
        }
        for(auto it : freq){
            if(it.second == maxi){
                ans += maxi;
            }
        }
        return ans;

    }
};