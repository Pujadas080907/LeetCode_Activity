class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.size();
        int maxLen = 0;
        for(int i=0; i<n; i++)
        {
            int hasharr[256] ={0};
            for(int j=i; j<n; j++)
            {
                if(hasharr[s[j]] == 1) break;
                 int  len = j - i + 1;
                maxLen = max(maxLen, len);
                  hasharr[s[j]] =1;
            }
          
        }
        return maxLen;
    }
};