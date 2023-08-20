#include <iostream>
#include <vector>
#include <map>
#include <algorithm>


using namespace std;

class Solution {
public:
    bool isSubsequence(string s, string t) {

        int i = 0;
        int j = t.size() - 1;
        int keySt = 0;
        int keyEnd = s.size() - 1;
        
        if (s == "") {
            return true;
        }
        
        while (i < j) {

  
            if (t[i] == s[keySt]) {
                keySt++;

            }
            if (i != j && t[j] == s[keyEnd]) {
                keyEnd--;
            }

            i++;
            j--;


            if (keySt > keyEnd) {
                cout << "true" << endl;
                return true;
            }


        }
        cout << "false" << endl;
        return false;
    }
};

int main() {

    Solution solve;
    string s = "abc", t = "ahbgdc";
    


    solve.isSubsequence(s,t);
    string s1 = "axc", t1 = "ahbgdc";
    solve.isSubsequence(s1,t1);    
    string s2 = "", t2 = "ahbgdc";
    solve.isSubsequence(s2,t2);

    return 0;
}
