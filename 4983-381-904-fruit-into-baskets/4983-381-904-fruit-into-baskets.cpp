class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        int n = fruits.size();
        int maxLen = 0, Len = 0, left = 0, right = 0;
        unordered_map<int,int> mp;
        int k = 2;
        while(right<n){
            mp[fruits[right]]++;
            if(mp.size()> k){
                mp[fruits[left]]--;
                if(mp[fruits[left]] == 0)
                {
                    mp.erase(fruits[left]);

                }
                left++;
            }
            if(mp.size()<= k){
                Len = right - left +1;
                maxLen = max(maxLen , Len);
            }
            right++;
        }
        return maxLen;
    }

};