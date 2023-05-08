/*



jscodez

find target variable inside vector at log n run time


date: 5/8






*/


#include <iostream>
#include <vector>

#include <string>

using namespace std;

class Solution {
public:
    int search(vector<int>& nums, int target) {

        int startIdx = 0;
        int endIdx = nums.size() - 1;

        int midIdx = (startIdx + endIdx) / 2;
 
        while (startIdx <= endIdx) {
            midIdx = (startIdx + endIdx) / 2;

            if (nums[midIdx] == target) {
                cout << "midIdx = " << midIdx << endl;
                return midIdx;
            }

            if (nums[startIdx] <= nums[midIdx]) {
                if (nums[startIdx] <= target && nums[midIdx] >= target) {
                    endIdx = midIdx - 1;
                }
                else {
                    startIdx = midIdx + 1;
                }

            }
            else {
                if (nums[endIdx] >= target && nums[midIdx] <= target) {
                    startIdx = midIdx + 1;

                }
                else {
                    endIdx = midIdx - 1;
                }
            }

        }

        cout << "-1" << endl;
        return -1;
    }
};


int main() {

    vector<int> nums;

    int target;

    Solution solution;


    cout << endl;
    cout << "nums = { 4,5,6,7,0,1,2 } target = 0; " << endl;

    nums = { 4,5,6,7,0,1,2 };
    target = 0;
    solution.search(nums, target);

    cout << endl;
    cout << "nums = { 4,5,6,7,0,1,2 } target = 3; " << endl;

    nums = { 4,5,6,7,0,1,2 };
    target = 3;
    solution.search(nums, target);

    cout << endl;
    cout << "nums = { 4,5,6,7,0,1,2 } target = 4; " << endl;

    nums = { 4,5,6,7,0,1,2 };
    target = 4;
    solution.search(nums, target);


    cout << endl;
    cout << "nums = { 1 } target = 0; " << endl;

    nums = { 1 };
    target = 0;

    solution.search(nums, target);



    cout << endl;
    cout << "nums = { 1,3,5 } target = 3; " << endl;

    nums = { 1,3,5 };
    target = 3;

    solution.search(nums, target);


    cout << endl;
    cout << "nums = { 1,3 } target = 0; " << endl;

    nums = { 1,3 };
    target = 0;
    solution.search(nums, target);


    cout << "1,3, 5 ---> TARGET 5" << endl;

    nums = { 1,3,5 };
    target = 5;

    solution.search(nums, target);

    return 0;

}
