/*
//Author: jscodez
//Date: 3/12/2023
//Description:  Find Longest Substring.  Medium difficulty
// Time complexity is O(n^3)
*/

/****************************************************************************************************************
Directions:

Given a string s, find the length of the longest substring without repeating characters.
****************************************************************************************************************/

#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Solution {
public:


	/****************************************************************************************************************
	//Iterates through the index of start of substring and returns true or false.
	// False indicates that the next character is repeated and therefore end of substring count for unique characters
	// True returns back that the current substring accumulation can continue on.
	// Skips any non lexical characters i.e. spaces and continues on the substring
	****************************************************************************************************************/
	bool confirmUnique(string s, int startIdx, int endIdx) {

		for (int i = startIdx; i < endIdx; i++) {

			if (s[i] == s[endIdx] && ('a' <= s[i] && s[i] <= 'z') || ('A' <= s[i] && s[i] <= 'Z')) { return false; }
		}


		return true;
	}

	int	findLongLen(string s) {
		int idxIncrement = 0;
		int lenCounter = 1;
		int longestSubStr = 0;
		string currentLongSubStr = "";



		for (int i = 0; i < s.length(); i++) {

			cout << "i: " << i << endl;
			idxIncrement = i + 1;
			if (('a' <= s[i] && s[i] <= 'z') || ('A' <= s[i] && s[i] <= 'Z')) {
				while (idxIncrement <= s.length() && confirmUnique(s, i, idxIncrement) == true) {
					if (('a' <= s[idxIncrement] && s[idxIncrement] <= 'z') || ('A' <= s[idxIncrement] && s[idxIncrement] <= 'Z')) {
						lenCounter++;

						if (lenCounter > longestSubStr) {

							longestSubStr = lenCounter;
						}
					}
					idxIncrement++;

				}
				lenCounter = 1;
			}
		}

		cout << "LONGEST SUBSTRING IS: " << longestSubStr << " characters" << endl;

		return 0;

	}
};


int main() {

	/*

	string myStr = "pwwkew";

	string myStr = "abcdefghijklmnopqrstuvwxyzpwwkewasdfwefwefaioshjfaoijoaijfo";
	*/
	string myStr;




	cout << "PLEASE ENTER STRING TO FIND THE LONGEST SUBSTRING W/O REPEATED CHARACTERS: " << endl;

	getline(cin, myStr);



	Solution findLongSubStr;

	findLongSubStr.findLongLen(myStr);




	return 0;

}

