class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {
        int n = coins.size();
        vector<int> prev(amount + 1, 0), curr(amount + 1, 0);

        for (int T = 0; T <= amount; T++) {
            if (T % coins[0] == 0) {
                prev[T] = T / coins[0];
            } else {
                prev[T] = 1e9;
            }
        }

        for (int idx = 1; idx < n; idx++) {
            for (int T = 0; T <= amount; T++) {
                int notTake = prev[T];
                int take = 1e9;
                if (coins[idx] <= T) {
                    take = 1 + curr[T - coins[idx]];
                }
                curr[T] = min(take, notTake);
            }
            prev = curr;
        }

        int ans = prev[amount];
        return (ans >= 1e9) ? -1 : ans;
    }
};
