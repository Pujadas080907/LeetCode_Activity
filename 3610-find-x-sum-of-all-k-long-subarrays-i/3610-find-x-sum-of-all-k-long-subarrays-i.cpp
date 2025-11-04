class Solution {
public:
    vector<int> findXSum(vector<int>& nums, int k, int x) {
        int n = nums.size();
        vector<int> ans(n-k+1);

        for(int i=0; i<n-k+1; i++){
            map<int,int> cnt;
            for(int j=i; j< i+k; j++){
                cnt[nums[j]]++;
            }
            vector<pair<int,int>> p;
            for(auto it: cnt){
                p.push_back({it.second, it.first});
            }
            sort(p.begin(),p.end(),greater<pair<int,int>>());
            for(int j=0; j<p.size()&&j<x; j++){
                ans[i] += p[j].first*p[j].second;
            }
        }
        return ans;
    }

    
};