#include <iostream>
#include <vector>
#include <map>


using namespace std;
class Solution {	
public:
    bool canJump(vector<int>& nums) {

        int n = nums.size();
        int currentJump = 0;
        for (int i = 0; i < n; i++) {
            cout << "while" << endl;
            if (i > currentJump) {
                
                return false;
            }
            currentJump = max(currentJump, i + nums[i]);
            
    
        }
        cout << "true" << endl;
        return true;
    }
};


int main() {
	vector<int> nums = { 1 };
	
	Solution solve;
	solve.canJump(nums);
	return 0;
}
