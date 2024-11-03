class Solution {
public:
    bool rotateString(string s, string goal) {
        int n = s.size(), m = goal.size();
        if(n != m ) return false;
        string c = s+s;
        return c.find(goal) < c.size();
    }
};