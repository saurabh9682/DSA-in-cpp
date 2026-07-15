class Solution {
public:
    int maxProfit(vector<int>& prices) {
// Profit-
// Sell Price - Buy Price
// Maximum profit nikalna hai.
 // step1    profit = prices[i] - minPrice;
  // step2   minPrice = min(minPrice, prices[i]);

        int minprice=prices[0];
        int ans=0;
        for(int i=1;i<prices.size();i++){
            int profit=prices[i]-minprice;
            ans=max(ans,profit);
            minprice=min(minprice,prices[i]);
        }
        return ans;
    }
};