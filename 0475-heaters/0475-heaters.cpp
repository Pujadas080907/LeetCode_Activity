class Solution {
private:
    int BSfloor(vector<int>& heaters, int m, int h)
    {
        int low = 0; int high = m-1;
        int floor = -1;
        while(low<=high)
        {
            int mid = (low + high)/2;
            if(heaters[mid]<= h)
            {
                floor = heaters[mid];
                low = mid+1;
            }else
            {
                high = mid-1;
            }
        }
        return floor;
    }
    
    int BSceil(vector<int>& heaters, int m, int h)
    {
        int low = 0; int high = m-1;
        int ceil = -1;
        while(low<=high)
        {
            int mid = (low + high)/2;
            if(heaters[mid]>= h)
            {
                ceil = heaters[mid];
                high = mid-1;
               
            }else
            {
                 low = mid+1;
            }
        }
        return ceil;
        
    }
public:
    int findRadius(vector<int>& houses, vector<int>& heaters) {
        int n = houses.size();
        int m = heaters.size();
        int ans = 0;
        sort(heaters.begin(), heaters.end());
        for(int i=0; i<n; i++)
        {
            int h  = houses[i];
            int floor = BSfloor(heaters,m,h);
            int ceil = BSceil(heaters,m,h);
            if(floor == -1)
            {
                floor = ceil;
            }
             if(ceil == -1)
            {
                ceil = floor;
            }
            int mn = min(abs(h-floor),abs(h-ceil));
            ans = max(ans,mn);
        }
        return ans;
    }
};