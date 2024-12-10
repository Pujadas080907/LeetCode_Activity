class Solution {
public:
    int maximumLength(string s) {
        int n = s.size();
        map<pair<char,int>,int>  mp;
        for(int i=0; i<n; i++)
        {
            char ch  = s[i];
            int len = 0;
            for(int j=i; j<n; j++)
            {
                if(s[j]==ch)
                {
                    len++;
                    mp[{ch,len}]++;
                }else
                {
                    break;
                }
            }
        }

        int ans = 0;
        for(auto &it : mp)
        {
            int l = it.first.second;
            int freq = it.second;
            if(freq>=3 && l>ans)
            {
                ans = l;
            }
        }
        return ans == 0 ? -1: ans;
    }
};