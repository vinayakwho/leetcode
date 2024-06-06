class Solution {
public:
    int maxProfit(vector<int>& prices) {
        if (prices.empty()) {
            return 0; // If prices is empty, return 0 profit
        }
        // Initialize max_profit to 0 and min_price to the first price
        int max_profit = 0;
        int min_price = prices[0];

        // Iterate through the prices starting from the second day
        for (int i = 1; i < prices.size(); i++) {
            // Update min_price if we find a lower price
            if (prices[i] < min_price) {
                min_price = prices[i];
            } 
            // Calculate profit if we sell at prices[i] and buy at min_price
            else {
                max_profit = max(max_profit, prices[i] - min_price);
            }
        }
        return max_profit;
    }
};
       