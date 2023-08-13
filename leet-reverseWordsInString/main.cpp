#include <iostream>
#include <vector>
#include <sstream>
#include <stack>


using namespace std;

class Solution {
public:

    void disp(string s) {

        cout << endl << "s: " << s << endl;
    }
    string reverseWords(string s) {
   
        int spaceIdx1 = s.find_first_not_of(" ");
   
        stack<string> stackWord;

        s = s.substr(spaceIdx1, s.find_last_not_of(" ") -spaceIdx1 +1);
        
  
        int j = s.find(" ");
        string tempWord;

        
        while (j != -1) {

            tempWord = s.substr(0, j);

            stackWord.push(tempWord);

            s.erase(0, j);

            s = s.substr(s.find_first_not_of(" "));
 
            j = s.find(" ");
            
        }


        while (!stackWord.empty()) {
     
            s += " " + stackWord.top();
            stackWord.pop();
        }
     
        cout << "s final =" << s << "..." << endl;
        return s;
    }
};

int main() {

    Solution solve;

    string s = " the sky is blue          ";
    /* blue is sky the */
    solve.reverseWords(s);
    return 0;
}
