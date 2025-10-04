class Solution {
public:
    int maxArea(vector<int>& h) {
        int n = h.size();
        int maxW = 0;
        int s = 0, e = n-1;
        while(s<e){
            int w = e - s;
            int ht = min(h[s], h[e]);
            int currW = w * ht;
            maxW = max(maxW,currW);

            h[s]<h[e] ? s++ : e--;
        }
        return maxW;
    }
};