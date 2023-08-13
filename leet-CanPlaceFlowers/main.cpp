#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:

	void disp(vector<int> fb) {
		for (int i = 0; i < fb.size(); i++) {
			cout << fb[i] << ", ";
		}
		cout << endl;
	}

	bool canPlaceFlowers(vector<int>& flowerbed, int n) {


		int fbSize = flowerbed.size();

		int i = 0;
	

		if (n == 0) {
			return true;
		}

		if (flowerbed.size() == 1) {

			if (flowerbed[0] == 0 && n == 1) {
				return true;
			}
		}

		while (i < fbSize) {
		
			if (flowerbed[i] == 1) {
				i += 2;
			}
			else if (flowerbed[i] == 0 && i == 0) {

				if (flowerbed[i + 1] == 0) {

					flowerbed[i] = 1;
					i += 2;
					n--;
				}
				else {
					i++;
				}
			}
			else if (flowerbed[i] == 0 && i == (fbSize - 1)) {

				if (flowerbed[i - 1] == 0) {

					flowerbed[i] = 1;
					i += 2;
					n--;
				}
				else {
					i++;
				}
			}
			else if (flowerbed[i] == 0 && flowerbed[i - 1] == 0 && flowerbed[i + 1] == 0) {

				flowerbed[i] = 1;
				i += 2;
				n--;
			}
			else {
				cout << "i++" << endl;
				i++;
			}


			if (n == 0) {
				disp(flowerbed);
				cout << "true" << endl;
				return true;
			}


		}


		disp(flowerbed);
		cout << "false" << endl;
		return false;
	}


};



int main() {

	vector<int> flowerbed = { 0,1,0 };

	int n = 1;

	Solution solve;
	solve.canPlaceFlowers(flowerbed, n);


	return 0;
}
