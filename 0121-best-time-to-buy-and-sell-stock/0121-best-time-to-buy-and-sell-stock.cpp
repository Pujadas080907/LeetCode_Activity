class Solution {
public:
    int maxProfit(vector<int>& prices) {
int maxPro = 0;
int minPrice = INT_MAX;
for(int price  = 0 ; price<prices.size(); price++)
{
minPrice = min(minPrice, prices[price]);
maxPro = max(maxPro, prices[price] - minPrice);
}

return maxPro;

    }
};