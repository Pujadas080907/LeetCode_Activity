class Solution {
public:

    int cnt = 0;

    void helper(vector<int>& freq)
    {
      
        for(int i=0; i<26; i++)
        {
           
            if(freq[i] == 0)
            {
                continue;
            }
            freq[i]--;
             cnt++;
            helper(freq);
            freq[i]++;
        }
    }
    int numTilePossibilities(string tiles) {
        cnt = 0;
        vector<int> freq(26,0);
        for(char c : tiles)
        {
            freq[c - 'A']++;
        }

        helper(freq);
       return cnt;

    }
};