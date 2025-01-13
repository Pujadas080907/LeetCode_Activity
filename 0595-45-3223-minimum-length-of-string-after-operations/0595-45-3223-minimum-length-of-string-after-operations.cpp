class Solution {
public:
    int minimumLength(string s) {
        vector<int> charFrequency(26, 0);
        int ans = 0;
        for (char currentChar : s) {
            charFrequency[currentChar - 'a']++;
        }
        for (int freq : charFrequency) {
            if (freq == 0) continue;
            if (freq % 2 == 0) {
                ans += 2;
            } else {
                ans += 1;
            }
        }
        return ans;
    }
};