#include <iostream>
#include <vector>
#include <queue>
#include <stack>

using namespace std;


class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {

        int idx1 = 0;
        int idx2 = 0;

        int sum = 0;

        int i = 0;
        int j = numbers.size() - 1;

        vector<int> ans = { 0,0 };

        while (i < j) {
            
            sum = numbers[i] + numbers[j];

            if (sum == target) {
                cout << "i = " << i+1 << " j = " << j+1 << endl;
                return  { i+1, j+1 };
            }
            if (sum < target) {
                i++;
            }
            if (sum > target) {
                j--;
            }
        }
        
        

    }
};

int main() {

    vector<int> numbers = { 2,7,11,15 };
    int target = 9;

    Solution solve;
    solve.twoSum(numbers, target);

    return 0;
}
