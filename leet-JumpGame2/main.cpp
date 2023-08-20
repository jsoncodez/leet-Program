#include <iostream>
#include <vector>
#include <map>


using namespace std;


class Solution {
public:
    int jump(vector<int>& nums) {

        int jumpCount = 0;      
        int n = nums.size();
        int i = 0; 
        int lastJumpedPos = 0;
        int maxJump = 0;

        while (lastJumpedPos < n - 1) {
            maxJump = max(maxJump, i + nums[i]);

            if (i == lastJumpedPos) {
                lastJumpedPos = maxJump;
                jumpCount++;
            }
            i++;
        }
        cout << "jumpCount = " << jumpCount << endl;
        return jumpCount;
    }
};

int main() {

    Solution solve;
    vector<int> nums = { 2,0,2,0,1 };
    solve.jump(nums);

}
