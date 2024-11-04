class Solution {
public:
    string compressedString(string word) {
        int n = word.size();
        string comp = "";
        int cnt = 1;

        for (int i = 1; i < n; i++) {
            if (word[i] == word[i - 1]) {
                cnt++;
            } else {
                while (cnt > 9) {
                    comp += "9" + string(1, word[i - 1]);
                    cnt -= 9;
                }
                comp += to_string(cnt) + word[i - 1];
                cnt = 1;
            }
        }

        while (cnt > 9) {
            comp += "9" + string(1, word[n - 1]);
            cnt -= 9;
        }
        comp += to_string(cnt) + word[n - 1];

        return comp;
    }
};
