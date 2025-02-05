class Solution {
public:
    bool areAlmostEqual(string s1, string s2) {
        int firstIdx = 0, secIdx = 0;
        int diff = 0;
        for(int i=0; i<s1.size(); i++)
        {
            if(s1[i] != s2[i]){
                diff++;
                
             if(diff>2)
            {
                return false;
            }else if(diff == 1)
            {
                firstIdx = i;
            }else
            {
                secIdx = i;
            }
            }

           
        }
        return s1[firstIdx] == s2[secIdx] && s1[secIdx] == s2[firstIdx];
        
    }
};