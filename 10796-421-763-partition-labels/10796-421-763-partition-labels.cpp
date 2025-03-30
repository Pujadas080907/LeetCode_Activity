class Solution {
public:
    vector<int> partitionLabels(string s) {
        int n = s.length();
        vector<int> mp(26, -1);
        vector<int> ans;
        for(int i=0; i<n; i++){
            int idx = s[i] - 'a';
            mp[idx] = i;
        }
        int i = 0, start = 0, end =0;
        while(i<n){
            end = max(end, mp[s[i] - 'a']);
            if(i == end){
                ans.push_back(end - start +1);
                start = end + 1;
            }
            i++;
        }
        return ans;
    }
};