class Solution {
public:

   // IT IS SOLVED VIA RECURSION:->

    // void solveprofit(vector<int>& prices, int i, int &min_price, int &max_profit) {
    //     // base case
    //     if (i == prices.size()) return;

    //     // Update the minimum price encountered so far
    //     if (prices[i] < min_price) min_price = prices[i];

    //     // Calculate today's profit
    //     int todaysprofit = prices[i] - min_price;

    //     // Update the maximum profit encountered so far
    //     if (todaysprofit > max_profit) max_profit = todaysprofit;

    //     // Recur for the next day
    //     solveprofit(prices, i + 1, min_price, max_profit);
    // }

    int maxProfit(vector<int>& prices) {
        // int min_price = INT_MAX;
        // int max_profit = 0;  // Initialize max_profit to 0, not INT_MIN
        // solveprofit(prices, 0, min_price, max_profit);
        // return max_profit;

        // BY the Dynamic programming
        int maxprofit=0;
        int mini=prices[0];
        for(int i=1; i<prices.size();i++){
              int cost=prices[i]-mini;
              maxprofit=max(maxprofit,cost);
              mini=min(mini,prices[i]);
        } 
        return maxprofit;
    }
};
