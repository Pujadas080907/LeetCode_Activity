class Solution {
public:
    int countMaxOrSubsets(vector<int>& nums) {
        int n = nums.size();
        int x=0, ans = 0;
        for(int i=0; i<n; i++) x|=nums[i];
        int p = pow(2,n);
        for(int i=1; i<p; i++){
            int cv = 0;
            for(int j =0; j<n; j++){
                int v = 1<<j;
                if(v&i) cv|= nums[j];
            }
            if(cv==x) ans++;
        }
        return ans;
    }
};