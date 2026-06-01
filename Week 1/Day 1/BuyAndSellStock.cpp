class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit = 0, buyStock = prices[0];
        int n = prices.size();
        for(int i=0; i<n; i++){
            if( prices[i] < buyStock){
                buyStock = prices[i];
            }
            profit = max(profit, prices[i]-buyStock);
        }
        return profit;
    }
    
};