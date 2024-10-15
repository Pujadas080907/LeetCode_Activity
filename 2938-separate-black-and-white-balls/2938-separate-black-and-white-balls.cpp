class Solution {
public:
    long long minimumSteps(string s) {
        long long cnt = 0;
        int ptr = 0;
        for(int i=0; i<s.length(); i++){
            if(s[i]=='0')
            cnt +=(long long)ptr;
            else
            ptr++;
        }
        return cnt;
    }
};