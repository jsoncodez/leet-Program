#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    void dispV(vector<int> printV) {

        cout << "VECTOR PRINT: " << endl << "\t";
        for (int i = 0; i < printV.size(); i++) {
            cout << printV[i] << ", ";


        }
        cout << endl;
    }
    void disp(vector<vector<int>> matrix) {

        for (int i = 0; i < matrix.size(); i++) {
            for (int j = 0; j < matrix[i].size(); j++) {
                cout << matrix[i][j] << ", ";

            }
            cout << endl;
        }
    }
    void rotate(vector<vector<int>>& matrix) {
        int n = matrix.size();
        int c = 0;
        int r = 0;
        int tempNum;
        int tempNewNum;
        int nMax = n - 1;
        int nMin = 0;
        int totalMoves = nMax;
        char dir = 'r'; // r d l u
        int rotateCount = 0;


        tempNum = matrix[nMin][nMin];

        while (nMin < nMax) {
            tempNum = matrix[r][c];

            
            while (rotateCount < 4) {
              
                //right
                if (totalMoves > 0 && dir == 'r') {
    
                    if (c + totalMoves <= nMax) {


                        tempNewNum = matrix[r][c + totalMoves];
                        matrix[r][c + totalMoves] = tempNum;
        
                        c += totalMoves;
                        totalMoves = 0;
                        tempNum = tempNewNum;

                    }
                    else {


                        totalMoves -= nMax - c;
                        c = nMax;
                        dir = 'd';
                    }

                }
         
                //down
                if (totalMoves > 0 && dir == 'd') {
             
                    if (r + totalMoves <= nMax) {

                        tempNewNum = matrix[r + totalMoves][c];

                        matrix[r + totalMoves][c] = tempNum;
             
                        r += totalMoves;
                        totalMoves = 0;
                        tempNum = tempNewNum;

                    }
                    else {


                        totalMoves -= nMax - r;
                        r = nMax;
                        dir = 'l';
                    }
                }
             
                //left
                if (totalMoves > 0 && dir == 'l') {
          
                    if (c - totalMoves >= nMin) {


                        tempNewNum = matrix[r][c - totalMoves];

                        matrix[r][c - totalMoves] = tempNum;
                        //matrix[r][c - totalMoves] = matrix[r][c];
                        c -= totalMoves;
                        totalMoves = 0;
                        tempNum = tempNewNum;

                    }
                    else {


                        totalMoves -= c-nMin;
                        c = nMin;
                        dir = 'u';
                    }
                }
   
                //up
                if (totalMoves > 0 && dir == 'u') {
                  
                    
                    if (r - totalMoves >= nMin) {
                        tempNewNum = matrix[r - totalMoves][c];
                        
                        matrix[r - totalMoves][c] = tempNum;
                        //matrix[r - totalMoves][c] = matrix[r][c];
                        r -= totalMoves;
                        totalMoves = 0;
                        tempNum = tempNewNum;


                    }
                    else {


                        totalMoves -= r - nMin;
                        r = nMin;
                        dir = 'r';
                    }
                }
            
                if (totalMoves == 0) {
                    totalMoves = nMax - nMin;
                    rotateCount++;
                    
                    //dir = 'r';
                }
                


            }

            if (c >= nMax - 1) {
                nMin++;
                nMax--;
                r++;
                c = r;
                
            }
            else {
                c++;
                

            }
            rotateCount = 0;
            totalMoves = nMax - nMin;
            dir = 'r';

        }
        
        

        cout << "end = " << endl;
        disp(matrix);
    }
};

int main() {
    Solution solve;
    vector<vector<int>> matrix = { {1,2,3} ,{4,5,6},{7,8,9 } };



    
    solve.rotate(matrix);

    
    matrix = { {5,1,9,11} ,{2,4,8,10},{13,3,6,7}, {15,14,12,16 } };
    

    
    solve.rotate(matrix);
    
    
    matrix = { {1, 2, 3, 4, 5}, {6, 7, 8, 9, 10}, {11, 12, 13, 14, 15}, {16, 17, 18, 19, 20}, {21, 22, 23, 24, 25} };
    solve.rotate(matrix);


    return 0;
}
