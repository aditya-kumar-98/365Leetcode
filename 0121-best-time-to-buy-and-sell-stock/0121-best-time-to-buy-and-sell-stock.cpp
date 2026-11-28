class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int purchase = INT_MAX;
        int i = 0;
        int profit = 0;
        while(i < n){
            purchase = min(purchase, prices[i]);
            profit = max(profit, (prices[i] - purchase));
            i++;
        }
        return profit;
    }
};