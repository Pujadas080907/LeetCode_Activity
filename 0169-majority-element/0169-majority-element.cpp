class Solution {
public:
    int majorityElement(vector<int>& nums) {
int count = 0; int element;
int n = nums.size();
for(int idx = 0; idx<n; idx++)
{
if(count == 0)
{
count = 1;
element=nums[idx] ;
}else if(nums[idx] == element)
{
count++;
}else
{
count--;
}
}
int count1 = 0;
for( int idx = 0; idx<n; idx++)
{
if(nums[idx] == element)
{
 count1++;   
}

if(count1>n/2)
{
return element; 
}


}
return -1;
   
    }
};