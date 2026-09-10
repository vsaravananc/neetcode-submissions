class Solution {
public:
    int maxProfit(vector<int>& prices) {
        if(prices.size() <= 1) return 0;
        int profit , left , right;
        profit = left = 0;
        while (left < prices.size()){
            right = left + 1;
            while(right < prices.size()){
            int buyingPrice = prices[left];
            int sellingPrice = prices[right];
            if(sellingPrice - buyingPrice >0){
                profit = max(profit,sellingPrice - buyingPrice);
            }
            right++;
            }
            left++;
        }
        return profit;
    }
};
