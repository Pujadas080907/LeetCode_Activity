class Solution {
public:

   int binarysearch(vector<vector<int>>& items, int q){
    int l=0; int h = items.size()-1;
    int maxbty = 0;
    while(l<=h){
        int mid = l+(h-l)/2;
        if(items[mid][0]>q)
        {
            h = mid-1;
        }else{
            maxbty = max(maxbty, items[mid][1]);
            l = mid+1;
        }
    }
    return maxbty;
   }



    vector<int> maximumBeauty(vector<vector<int>>& items, vector<int>& queries) {
        int n = items.size(); int m = queries.size();
        vector<int> ans(m);
        sort(begin(items), end(items));
        int maxb = items[0][1];
        for(int i=1; i<n; i++)
        {
            maxb = max(maxb, items[i][1]);
            items[i][1]=maxb;
        }
        for(int i=0; i<m; i++)
        {
            int q = queries[i];
            ans[i]= binarysearch(items, q);
        }
        return ans;
    }
};