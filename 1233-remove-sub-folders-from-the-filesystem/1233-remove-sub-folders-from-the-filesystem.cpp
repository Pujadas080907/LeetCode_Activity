class Solution {
public:
    vector<string> removeSubfolders(vector<string>& folder) {
        sort(folder.begin(), folder.end());
        vector<string> ans;
        ans.push_back(folder[0]);

        for(int i = 1; i < folder.size(); i++) {
            string lstF = ans.back();
            lstF.push_back('/');

            if(folder[i].compare(0, lstF.size(), lstF) != 0) {
                ans.push_back(folder[i]);
            }
        }

        return ans;
    }
};
