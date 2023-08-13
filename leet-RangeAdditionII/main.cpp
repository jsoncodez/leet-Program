#include <iostream>
#include <vector>
#include <sstream>
#include <stack>


using namespace std;

class Solution {
public:

    void disp(vector<int> rowCol) {

        for (int i = 0; i < rowCol.size(); i++) {
            cout << rowCol[i] << ", ";
        }
        cout << endl;
    }

    int maxCount(int m, int n, vector<vector<int>>& ops) {

  
        int smallestX = m;
        int smallestY = n;

        vector<int> coord;

        int x;
        int y;

        for (int i = 0; i < ops.size(); i++) {
            coord = ops[i];

            x = coord[0];
            y = coord[1];

            if (smallestX > x) {
                smallestX = x;
              
                
            }
            if (smallestY > y) {
                smallestY = y;
             
            }
    
        }

    
        int answer = smallestX * smallestY;


        return answer;
    }
};

int main() {

    Solution solve;

    string s = "IDID";

    int m = 3;
    int n = 3;
    vector<vector<int>> ops = { {2,2} ,{3,3} };



    solve.maxCount(m,n,ops);


    return 0;
}
