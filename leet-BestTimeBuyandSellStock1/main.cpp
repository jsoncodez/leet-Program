#include <iostream>
#include <vector>
#include <map>


using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {

        int profit = 0;
        int i = 0;
        int j = 1;
        int n = prices.size();

  
        while (j < n) {
            if (prices[i] > prices[i + 1]) {
                i++;
                j++;
            }
            else if (j != (n-1) && prices[j] < prices[j + 1]) {
                j++;
            }
            else {
                profit += prices[j] - prices[i];
                i = j + 1;
                j = i + 1;
            }
        }

   
        
        cout << "profit = " << profit << endl;
        return profit;



      
        
    }
};


int main() {

    vector<int> prices = { 3,3 };

    Solution solve;
    solve.maxProfit(prices);

	return 0;
}
