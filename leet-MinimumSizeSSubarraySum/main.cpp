#include <iostream>
#include <vector>
#include <queue>
#include <stack>

using namespace std;

class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        
        int sum = 0;
        int i = 0;
        int j = 0;
        int idxCount = INT_MAX;
        int n = nums.size();

        while (j < n) {

            sum += nums[j];
            while (sum >= target) {
                
                idxCount = min(idxCount, j - i + 1);
                sum -= nums[i];
                i++;

            }
            j++;
            
        }
        
        cout << "idxCount = " << idxCount << endl;
        if (idxCount == INT_MAX) {
            idxCount = 0;
        }
        return idxCount;
        
    }
};

int main() {

    Solution solve;

    //int target = 7;
    //vector<int> nums = { 2,3,1,2,4,3 };

    /*
    int target = 4;
    vector<int> nums = { 1,4,4};
    solve.minSubArrayLen(target, nums);
    
    int target = 11;
    vector<int> nums = { 1,1,1,1,1,1,1,1 };
    solve.minSubArrayLen(target, nums);
    */
    int target = 4;
    vector<int> nums = { 1,4,4 };
    solve.minSubArrayLen(target, nums);
    return 0;
}
