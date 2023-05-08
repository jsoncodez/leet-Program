#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <map>
#include <set>
#include <stack>


using namespace std;

class Solution {
public:
	bool isValid(string s) {


		stack<char> charStack;
		map<char, char> charPairs;


		charPairs['('] = ')';
		charPairs['{'] = '}';
		charPairs['['] = ']';



		for (int i = 0; i < s.length(); i++) {
			if (s[i] == '(' || s[i] == '{' || s[i] == '[') {

				charStack.push(s[i]);

			}
			else if (!charStack.empty()) {
		
				if (charStack.top() == '(' && charPairs[charStack.top()] == s[i] || charStack.top() == '{' && charPairs[charStack.top()] == s[i] || charStack.top() == '[' && charPairs[charStack.top()] == s[i]) {

					charStack.pop();


				}
				else {

					return false;
				}

			}
			else {

				return false;
			}



		}
		return true;



	}
};



















		/*
		map<char, char> charPairs;
		int j = s.length() -1;

		charPairs['('] = ')';
		charPairs['{'] = '}';
		charPairs['['] = ']';

		if (s.size() % 2 != 0) {
			return false;
		}


		for (int i = 0; i < s.length(); i ++) {
			if (charPairs[s[i]] == s[i + 1]) {
				i++;
				
		
			}
			else if (charPairs[s[i]] == s[j]) {
				j--;

			}
			else {
				cout << "false" << endl;

				return false;
			}

		}
		cout << "true" << endl;
		return true;



	}



	*/





		/*
		* 
		* vector<string>closedChar = { "()", "{}", "[]" };
				string compareStr = "";
		map<char, int> bracketCount;

		for (int i = 0; i < closedChar.size(); i++) {
			bracketCount[closedChar[i]] = 0;

		}


		for (int i = 0; i < s.length(); i+=2) {
			compareStr = s.substr(i, 2);

			if (compareStr == bracketCount[compareStr]) {

			}
			cout << compareStr << endl;	
		}
		*/
		/*
		vector<char>allChar = { '(',')','{', '}','[', ']' };
		

		map<char, int> charCount;

		for (int i = 0; i < allChar.size(); i++) {
			charCount[allChar[i]] = 0;
		}

		for (int i = 0; i < s.length(); i++) {
			charCount[s[i]]++;
		}



		for (int i = 1; i < charCount.size(); i+=2) {

			cout << charCount[allChar[i - 1]] << " : " << charCount[allChar[i]] << endl;
			if (charCount[allChar[i]] != charCount[allChar[i - 1]]) {

				cout << "FALSE" << endl;
				return false;
			}
			


		}
		


		cout << "TRUE" << endl;

		return true;
		

	}
	

};*/



int main() {

	Solution solution;



	//string s = "(){}[]";
	string s = "()";


	solution.isValid(s);

	return 0;
}