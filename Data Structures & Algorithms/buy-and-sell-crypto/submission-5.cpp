class Solution {
public:
     int maxProfit(vector<int>& prices) {
        if(prices.size() <= 1) return 0;
        int profit , left , right;
        profit = left = 0;
        while(right < prices.size()){
             if(prices[left] > prices[right]){
                left = right;
            }else{
                profit = max(profit, prices[right] - prices[left]);
            }
            right++;
        }
        return profit;
    }
};
