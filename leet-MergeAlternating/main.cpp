#include <iostream>
#include <vector>



using namespace std;


class Solution {
public:
    string mergeAlternately(string word1, string word2) {

        string ans;
        int longWord = 0;
        int word1Len = word1.length();
        int word2Len = word2.length();

        if (word1Len > word2Len) {
            longWord = word1Len;
        }
        else {
            longWord = word2Len;
        }

 
        int j = 0;
        for (int i = 0; i < longWord; i++) {
            if (i < word1Len) {
                ans += word1[i];
            }
            if (i < word2Len) {
                ans += word2[i];
            }
        }

        cout << "ans = " << ans << endl;
        return ans;

    }
};


int main() {

    string word1 = "abc", word2 = "pqr";

    Solution solve;
    solve.mergeAlternately(word1, word2);



    return 0;
};
