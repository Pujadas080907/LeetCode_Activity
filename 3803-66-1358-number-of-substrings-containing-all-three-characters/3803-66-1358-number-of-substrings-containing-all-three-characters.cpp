class Solution {
public:
    int numberOfSubstrings(string s) {
        int cnt = 0, lft = 0;
        unordered_map<char, int> freq ={{'a',0},{'b',0},{'c',0}};
        for(int i = 0; i<s.size(); i++){
            freq[s[i]]++;
            while(freq['a']>0 && freq['b']>0 && freq['c']>0){
                cnt += s.size() - i;
                freq[s[lft]]--;
                lft++;
            }
        }
        return cnt;
    }
};