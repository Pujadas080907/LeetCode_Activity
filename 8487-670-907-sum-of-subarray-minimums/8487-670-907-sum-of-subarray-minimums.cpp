class Solution {
private:
    vector<int> findNSE(vector<int> &arr) {
        int n = arr.size();
        vector<int> nse(n, n); 
        stack<int> st;

        for (int i = n - 1; i >= 0; i--) {
            while (!st.empty() && arr[st.top()] >= arr[i]) {
                st.pop();
            }
            nse[i] = st.empty() ? n : st.top();
            st.push(i);
        }
        return nse;
    }

    vector<int> findPSE(vector<int> &arr) {
        int n = arr.size();
        vector<int> pse(n, -1); 
        stack<int> st;

        for (int i = 0; i < n; i++) {
            while (!st.empty() && arr[st.top()] > arr[i]) {
                st.pop();
            }
            pse[i] = st.empty() ? -1 : st.top();
            st.push(i);
        }
        return pse;
    }

public:
    int sumSubarrayMins(vector<int>& arr) {
        const int MOD = 1e9 + 7;
        vector<int> nsc = findNSE(arr);
        vector<int> psc = findPSE(arr);
        long long total = 0;

        for (int i = 0; i < arr.size(); i++) {
            long long left = i - psc[i];
            long long right = nsc[i] - i;
            total = (total + (left * right * arr[i]) % MOD) % MOD;
        }

        return total;
    }
};
