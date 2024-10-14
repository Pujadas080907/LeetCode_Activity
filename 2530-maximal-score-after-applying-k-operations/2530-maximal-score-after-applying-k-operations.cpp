class Solution {
    #define ll long long
public:
    long long maxKelements(vector<int>& nums, int k) {
        priority_queue<ll> maxi(nums.begin(),nums.end());
        ll sum = 0;
        while(k--){
            ll curr = maxi.top();
            maxi.pop();
            sum += curr;
            curr = ceil((double)curr/3);
            maxi.push(curr);
        }

        return sum;
    }
};