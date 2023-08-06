class Solution {
public:
    void reverseString(vector<char>& s) {

        //another way
        int i = 0;
        int j = s.size()-1;
        char tempChar;
        while (i < j) {
            tempChar = s[j];

            s[j] = s[i];
            s[i] = tempChar;
            i++;
            j--;
        }

        /*
        stack<char> revStack;

        for (int i = 0; i < s.size(); i++) {
            revStack.push(s[i]);

        }

        int i = 0;
        while (!revStack.empty()) {
            s[i] = revStack.top();
            revStack.pop();
            i++;
        }
        */
    }
};
