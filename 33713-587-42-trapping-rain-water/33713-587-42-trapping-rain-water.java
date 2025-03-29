class Solution {
    public int trap(int[] height) {
        int n = height.length;
        int LeftMax = 0, RightMax = 0, total = 0;
        int l = 0 , r = n-1;
        while(l<r){
            if(height[l] <= height[r]){
                if(LeftMax > height[l]){
                    total += LeftMax - height[l];
                }else{
                    LeftMax = height[l];
                }
                l++;
            }
            else{
                if(RightMax > height[r]){
                    total += RightMax - height[r];
                }else{
                    RightMax = height[r];
                }
                r--;
            }
        }
        return total;
    }
}