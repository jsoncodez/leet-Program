#include <iostream>
#include <vector>
#include <sstream>
#include <stack>
#include <algorithm>


using namespace std;


class Solution {
public:

    void disp(vector<int> nums) {
        for (int i = 0; i < nums.size(); i++) {
            cout << nums[i] << ", ";
        }
        cout << endl;
    }
    void rotate(vector<int>& nums, int k) {

        int n = nums.size();
        vector<int> leftV(n);
   

        leftV = nums;
 
        int pivotIdx;

 
        pivotIdx = n - k;
         if (pivotIdx < 0) {
             pivotIdx = n - (k % n);
        }
        
       
        leftV.resize(pivotIdx);
        leftV.shrink_to_fit();
   
        nums.erase(nums.begin(), nums.begin()+(pivotIdx));

        nums.insert(nums.end(), leftV.begin(), leftV.end());
  
        disp(nums);

    }
};


int main() {
    Solution solve;

    vector<int> nums = { 1,2};
    /*[5,6,7,1,2,3,4]*/
//7
    int k = 5;

    solve.rotate(nums, k);

    return 0;

}
