class Solution {
public:
    int numberOfSubstrings(string s) {
        int LastSeen[3] = {-1, -1, -1};
        int n = s.size();
        int cnt = 0; 
        for(int i=0; i<n; i++){
            LastSeen[s[i] - 'a'] = i;
            if((LastSeen[0] != -1) && (LastSeen[1] != -1) && (LastSeen[2] != -1)){
                cnt += 1 + min(LastSeen[0], min(LastSeen[1],LastSeen[2]));
            }
        }
        return cnt;
    }
};