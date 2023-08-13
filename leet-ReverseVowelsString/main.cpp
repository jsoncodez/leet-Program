#include <iostream>
#include <vector>
#include <set>

using namespace std;

/* Given a string s, reverse only all the vowels in the string and return it. */

class Solution {
public:

	void disp(string s) {
		cout << "s: " << s << endl;
	}

    string reverseVowels(string s) {

		set<char> setVowels = { 'A','E','I','O','U', 'a', 'e', 'i','o','u' }; //logn search


		int i = 0;
		int j = s.length() -1;

		bool iVowel = false;
		bool jVowel = false;
		
		while (i < j) {

			if (setVowels.find(s[i]) == setVowels.end()) {
				i++;
			}
			else {
				iVowel = true;
		
			}

			if (setVowels.find(s[j]) == setVowels.end()) {
				j--;
			}
			else {
				jVowel = true;
		
			}

			if (iVowel == true && jVowel == true) {

				char tempVowel = s[i];
				s[i] = s[j];
				s[j] = tempVowel;

				iVowel = false;
				jVowel = false;
				j--;
				i++;
			}

		}
		disp(s);
		return s;
    }
};

int main() {

	string s = "aA";
	/* holle */


	Solution solve;
	solve.reverseVowels(s);


	return 0;
}
