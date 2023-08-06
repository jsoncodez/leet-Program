#include <iostream>
#include <vector>
#include <set>

using namespace std;

class Solution {
public:

    void disp(vector<int> nums) {

        for (int i = 0; i < nums.size(); i++) {
            cout << nums[i] << ", ";
        }
        cout << endl;
    }

    int removeDuplicates(vector<int>& nums) {

        int i = 0;
        int j = i + 2;

        int count = nums.size();

        while (j < count) {
            if (nums[i] == nums[j]) {
                
                nums.erase(nums.begin() + j);
                count--;
      
            }
            else {
                i++;
                j = i + 2;
            }
    
        }
        disp(nums);
        cout << count << endl;
        return count;

    }
};


int main() {

    Solution solve;
    
    vector<int> nums = { 0,0,1,1,1,1,2,3,3 };
    solve.removeDuplicates(nums);

	return 0;
}
