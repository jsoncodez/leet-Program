#include <iostream>
#include <string>
#include <vector>



using namespace std;


class Solution {
public:

    void display(vector<bool> candyVect) {
        for (int i = 0; i < candyVect.size(); i++) {
            cout << candyVect[i] << endl;

        }
    }

    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {

        int highestCandyCount = 0;
        
        vector<bool> result;

        for (int i = 0; i < candies.size(); i++) {

            if (highestCandyCount < candies[i]) {
                highestCandyCount = candies[i];
            }
        }

        for (int i = 0; i < candies.size(); i++) {
            if (candies[i] + extraCandies >= highestCandyCount) {
                result.push_back(true);
            }
            else {
                result.push_back(false);
            }
        }

        display(result);

        
        return result;
    }
};

int main() {


    Solution solve;

    vector<int> candies = { 2,3,5,1,3 };
    int extraCandies = 3;
    solve.kidsWithCandies(candies, extraCandies);
	return 0;
}
