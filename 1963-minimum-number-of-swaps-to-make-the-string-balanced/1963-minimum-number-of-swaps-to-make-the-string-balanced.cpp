class Solution {
public:
    int minSwaps(string s) {
        int i = 0;
        for(const char& ch : s){
            if(ch == ']'){
                if(i==0){
                    i++;
                }else{
                    i--;
                }
            }else{
                i++;
            }
        }
        return (i+1)/2;
    }
};