class Solution {
public:
     int maxProfit(vector<int>& prices) {
        if(prices.size() <= 1) return 0;
        int profit , left , right;
        profit = left = 0;
        while(right < prices.size()){
            int buy = prices[left];
            int sell = prices[right];
            if(buy > sell){
                left = right;
                right++;
                continue;
            }
            profit = max(profit, sell - buy);
            right++;
        }
        return profit;
    }
};
