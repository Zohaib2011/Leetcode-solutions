class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minPrice = prices[0];
        int maxProfit = 0;

        for (int i = 1; i < prices.size(); i++) {
            // آج کی price پر profit calculate کریں
            maxProfit = max(maxProfit, prices[i] - minPrice);

            // سب سے کم buying price update کریں
            minPrice = min(minPrice, prices[i]);
        }

        return maxProfit;
    }
};