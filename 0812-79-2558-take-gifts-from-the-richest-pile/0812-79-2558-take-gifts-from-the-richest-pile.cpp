class Solution {
public:
    long long pickGifts(vector<int>& gifts, int k) {
        priority_queue<int> pq(begin(gifts), end(gifts));
        long long sum = 0;
        for(auto it : gifts){
            sum += it;
        }
        while(k--){
            int max = pq.top();
            pq.pop();
            int remain = sqrt(max);
            sum -= max - remain;
            pq.push(remain);
        }
        return sum;
    }
};