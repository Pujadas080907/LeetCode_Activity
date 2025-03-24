class Solution {
public:
    int characterReplacement(string s, int k) {
        int maxLen = 0, maxF = 0, left = 0, right = 0;
        int hash[26]; memset(hash, 0, sizeof(hash));
        int n = s.size();
        while(right<n){
            hash[s[right] - 'A']++;
            maxF = max(maxF, hash[s[right] - 'A']);
            if((right - left + 1) - maxF > k){
                hash[s[left] - 'A']--;
                left++;
            }
            if((right - left + 1) - maxF <= k){
                maxLen = max(maxLen, right - left +1 );
                right++;
            }
        }
        return maxLen;
    }
};