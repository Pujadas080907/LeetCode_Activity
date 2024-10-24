class Solution {
    private:
    void swaparr(vector<int>& a1, vector<int>& a2, int idx1, int idx2){
        if(a1[idx1]>a2[idx2]){
            swap(a1[idx1], a2[idx2]);
        }
    }
public:
    void merge(vector<int>& a1, int m, vector<int>& a2, int n) {
        int len = (m + n);
        int gap = (len/2)+(len%2);
        while(gap>0){
            int l= 0 , r = l+gap;
            while(r<len){
                if(l<m && r>=m){
                swaparr(a1,a2,l,r-m);
            }else if(l>=m){
                swaparr(a2,a2,l-m, r-m);
            }else{
                swaparr(a1,a1,l,r);
            }
            l++; r++;
        }
            if(gap == 1) break;
            gap = (gap/2)+(gap%2);
      }
       for (int i = 0; i < n; i++) {
            a1[m + i] = a2[i];
        }

    }
};