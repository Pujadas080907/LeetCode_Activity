class Solution {
    private:
    void computeLev(string curr, queue<string>& q,unordered_set<string>& dead ){
        for(int i=0; i<4; i++){
            char ch = curr[i];
            char inc = ch == '9'?'0': ch+ 1;
            char dec = ch == '0'?'9':ch-1;
            curr[i] = inc;
            if(!dead.count(curr)){
                dead.insert(curr);
                q.push(curr);
            }

            curr[i]=dec;
             if(!dead.count(curr)){
                dead.insert(curr);
                q.push(curr);
            }
            curr[i]= ch;
        }
    }
public:
    int openLock(vector<string>& deadends, string target) {
        unordered_set<string> dead(begin(deadends), end(deadends));
        string start = "0000";
        if(dead.count(start))
        return -1;
        queue<string> q;
        q.push(start);
        int lev = 0;
        while(!q.empty()){
            int n = q.size();
            while(n--){
                string curr = q.front();
                q.pop();
                if(curr == target)
                return lev;
                computeLev(curr,q,dead);
            }
            lev++;
        }
        return -1;
    }
};