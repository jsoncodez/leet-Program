#include <iostream>
#include <vector>
#include <sstream>
#include <stack>


using namespace std;

class Solution {
public:

    void disp(vector<int> nums) {
        for (int i = 0; i < nums.size(); i++) {
            cout << nums[i] << ", ";
        }
        cout << endl;
    }
    vector<int> productExceptSelf(vector<int>& nums) {

        int n = nums.size();

        vector<int> ansVector(n);

        ansVector[0] = 1;

        for (int i = 1; i < n; i++) {
            ansVector[i] = ansVector[i - 1] * nums[i - 1];

        }

        int right = 1;

        for (int i = n - 1; i >= 0; i--) {
            ansVector[i] *= right;

            right *= nums[i];

        }
        disp(ansVector);
        return ansVector;

    }



};

int main() {
    Solution solve;


    vector<int> nums = { 1,2,3, 4 };

    
    /* 24,12,8,6 */

    /*
    * idea is that we are multiplying by itself shifted over in first for loop.  look at binary multi
    * 2nd loop is using bit multiplication strategy - multiple from right to left starting from 2nd end index and work in and solve for right to use fo
      
    */
    solve.productExceptSelf(nums);

    return 0;

}

