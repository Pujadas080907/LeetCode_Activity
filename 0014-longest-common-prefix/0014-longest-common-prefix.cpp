class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
     if (strs.empty()) {
            return "";
        }
        
        sort(strs.begin(), strs.end());
        string s1 = strs[0];
        string s2 = strs[strs.size() - 1];
        
        int i = 0;
        while (i < s1.size()) {
            if (s1.at(i) == s2.at(i)) {
                i++;
            } else {
                break;
            }
        }
        
        return s1.substr(0, i);
    }
};