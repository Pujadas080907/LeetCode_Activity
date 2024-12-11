class Solution {
public:
    int maxCount(vector<int>& banned, int n, int maxSum) {
        unordered_set<int> st(begin(banned),end(banned));
        int cnt = 0, sum =0;
        for(int num = 1 ; num <= n; num++)
        {
            if(st.count(num)) {continue;}
            if(num + sum <= maxSum)
            {
            cnt++; sum += num;
            }
            else {break;}
            
        }
        return cnt;
    }
};