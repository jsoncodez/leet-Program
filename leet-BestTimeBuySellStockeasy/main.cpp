class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int ans = 0;
        int tempMaxProfit = 0;
        int tempMinPrice = INT_MAX;
       

        for (int i = 0; i < prices.size(); i++) {
            if (prices[i] < tempMinPrice) {
                tempMinPrice = prices[i];
            }
            tempMaxProfit = prices[i] - tempMinPrice;
            
            if (tempMaxProfit > ans) {

                ans = tempMaxProfit;
            }
        }

  
        cout << "ans: " << ans << endl;

        return ans;
    }
};
