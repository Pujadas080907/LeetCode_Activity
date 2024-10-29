class Solution {
public:
    int search(vector<int>& a, int k) {
        int n = a.size();
        int low = 0 , high = n-1;
        while(low <= high)
        {
            int mid = (low + high)/2;
            if(a[mid] == k) {
                return mid;
            }
            
            if(a[low]<=a[mid])
            {
                if(a[low]<= k && k <= a[mid])
                {
                    high = mid - 1;
                }else
                {
                    low = mid + 1;
                }
            }else
            {
                if(a[mid]<=k && k <= a[high]){
                    low = mid + 1;
                }else
                {
                    high = mid - 1;
                }
            }
        }
        return -1;
    }
};