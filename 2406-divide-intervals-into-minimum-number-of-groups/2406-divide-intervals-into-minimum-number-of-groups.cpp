class Solution {
public:
    int minGroups(vector<vector<int>>& intervals) {
        vector<int> st, et;
        for(const auto& intervals : intervals){
            st.push_back(intervals[0]);
            et.push_back(intervals[1]);

        }
        sort(st.begin(), st.end());
        sort(et.begin(), et.end());
        int ep = 0, cnt = 0;

        for(int start : st){
            if(start> et[ep]){
                ep++;
            }else{
                cnt++;
            }
        }
        return cnt;
    }

};