class Solution {
public:
    int countDays(int days, vector<vector<int>>& meetings) {
        int n = meetings.size();
        sort(meetings.begin(), meetings.end());
        int start = 0, end = 0, res = 0;
        for(auto &meet : meetings){
            if(meet[0]>end){
                res += meet[0] - end - 1;
            }
            end = max(end, meet[1]);
        }
        if(end <days){
            res += days - end;
        }
        return res;
    }
};