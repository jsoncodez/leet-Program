class Solution {
public:
    bool isPalindrome(string s) {

       
        int i = 0;
        int j = s.length() - 1;

        while (i <= j) {


            if (s[i] >= 'A' && s[i] <= 'Z') {
                s[i] = tolower(s[i]);
            }
            if (s[j] >= 'A' && s[j] <= 'Z') {

                s[j] = tolower(s[j]);
            }

            if ((!ispunct(s[i]) && s[i] != ' ') && (!ispunct(s[j]) && s[j] != ' ')) {
                
                if (s[i] != s[j]) {
                    
                    return false;
                }
                i++;
                j--;
            }
            else {
                if (ispunct(s[i]) || s[i] == ' ') {
                    i++;
                }
                if (ispunct(s[j]) || s[j] == ' ') {
                    j--;
                }
            }



        }

        return true;
    }
};
