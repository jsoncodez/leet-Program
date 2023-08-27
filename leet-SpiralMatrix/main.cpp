#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:

	vector<int> ans;

	void disp() {
		for (int i = 0; i < ans.size(); i++) {
			cout << ans[i] << ", ";

		}
		cout << endl;
	}

	void spiralOrder(vector<vector<int>>& matrix) {

		int maxC = matrix[0].size();
		int maxR = matrix.size();
		int totalSq = maxC * maxR;
		
		int r = 0;
		int c = 0;

		while (totalSq > 0) {
			//right

			while (c < maxC && matrix[r][c] != INT_MIN) {

				ans.push_back(matrix[r][c]);
				matrix[r][c] = INT_MIN;
				c++;
			}

			c--;
			r++;

			//down
			while (r < maxR && matrix[r][c] != INT_MIN) {

				ans.push_back(matrix[r][c]);
				matrix[r][c] = INT_MIN;
				r++;
			}

			r--;
			c--;

			//left

			while (c >= 0 && matrix[r][c] != INT_MIN) {
	
				ans.push_back(matrix[r][c]);
				matrix[r][c] = INT_MIN;
				c--;
			}
			r--;
			c++;

			//up
			while (r >= 0 && matrix[r][c] != INT_MIN) {
				
				ans.push_back(matrix[r][c]);
				matrix[r][c] = INT_MIN;
				r--;
			}

			r++;
			c++;
			totalSq--;
			
		}

		disp();
	}
};

int main() {

	Solution solve;

	vector<vector<int>> matrix = { {1,2,3}, {4,5,6}, {7,8,9} };
	solve.spiralOrder(matrix);

}
