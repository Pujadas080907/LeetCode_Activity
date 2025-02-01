class Solution {
public:
    string findValidPair(string s) {

        unordered_map<int,int> freq;
        for(char c : s ){
            freq[c]++;

        }

        for(int i=0; i<s.size()-1; i++){
            char first = s[i], sec = s[i+1];
            if(first != sec && freq[first] == (first - '0') && freq[sec] == (sec -'0')) {
                return string(1,first) + string(1,sec);
            }
        }
        return "";
        
    }
};