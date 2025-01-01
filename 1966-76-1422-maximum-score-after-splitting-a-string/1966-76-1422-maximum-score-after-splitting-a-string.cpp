class Solution {
public:
    int maxScore(string s) {
        int n = s.size();
        int oneCnt = 0;
        for(int i=0; i<n; i++)
        {
            if(s[i] == '1')
            {
                oneCnt++;
            }
        }
        int zeroCnt = 0;
        int maxSum = 0;
        for(int i=0; i<n-1; i++)
        {
            if(s[i] == '1')
            {
                oneCnt--;
            }else
            {
                zeroCnt++;
            }
            maxSum = max(maxSum , zeroCnt + oneCnt);
        }
        return maxSum;
    }
};