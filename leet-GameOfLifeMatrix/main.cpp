#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:

    void disp(vector < vector<int>> board) {
        for (int i = 0; i < board.size(); i++) {
            for (int j = 0; j < board[0].size(); j++) {
                cout << board[i][j] << ", ";
            }
            cout << endl;
        }
    }

    int liveNeighborsCounter(vector<vector<int>>& board, int r, int c, int rMax, int cMax) {

        int neighborCount = 0;
        int rUp = r;
        int rDown = r;
        int cLeft = c;
        int cRight = c;

        if (r - 1 >= 0) {
            rUp = r - 1;
        }
        if (r + 1 < rMax) {
            rDown = r + 1;
        }
        if (c - 1 >= 0) {
            cLeft = c - 1;
        }

        if (c + 1 < cMax) {
            cRight = c + 1;
        }

        if (rUp != r) {
            if (board[rUp][c] == 1 || board[rUp][c] == -1) {
                neighborCount++;
            }
            if (cLeft != c) {
                if (board[rUp][cLeft] == 1 || board[rUp][cLeft] == -1) {
                    neighborCount++;
                }
            }
            if (cRight != c) {
                if (board[rUp][cRight] == 1 || board[rUp][cRight] == -1) {
                    neighborCount++;
                }
            }
        }
  
        if (rDown != r) {
            if (board[rDown][c] == 1 || board[rDown][c] == -1) {
                neighborCount++;
            }
            if (cLeft != c) {
                if (board[rDown][cLeft] == 1 || board[rDown][cLeft] == -1) {
                    neighborCount++;
                }
            }
            if (cRight != c) {
                if (board[rDown][cRight] == 1 || board[rDown][cRight] == -1) {
                    neighborCount++;
                }
            }
        }

        if (cRight != c) {
            if (board[r][cRight] == 1 || board[r][cRight] == -1) {
                neighborCount++;
            }
        }
        if (cLeft != c) {
            if (board[r][cLeft] == 1 || board[r][cLeft] == -1) {
                neighborCount++;
            }
        }

        
        return neighborCount;
    }

    void gameOfLife(vector<vector<int>>& board) {

        int liveNeighbors = 0;
        int r = 0;
        int c = 0;
        int rMax = board.size();
        int cMax = board[0].size();



        for (int i = 0; i < rMax; i++) {
            
            for (int j = 0; j < cMax; j++) {

                liveNeighbors = liveNeighborsCounter(board, i, j,rMax, cMax);

                if (board[i][j] == 0) {
                    if (liveNeighbors == 3) {
                        board[i][j] = 2;
                    }

                }
                else {


                    if (liveNeighbors < 2 || liveNeighbors > 3) {
                        board[i][j] = -1;
                    }
                }
            }
        }

        for (int i = 0; i < rMax; i++) {

            for (int j = 0; j < cMax; j++) {
                if (board[i][j] == 2) {
                    board[i][j]--;
                }
                else if (board[i][j] == -1) {
                    board[i][j]++;
                }
            }
        }

        disp(board);
        cout << endl;
        

    }
};

int main() {

    vector<vector<int>> board = { {0,1,0}, {0,0,1}, {1,1,1}, {0,0,0} };

    Solution solve;

    solve.gameOfLife(board);



    board = { {1,1}, {1,0} };
    solve.gameOfLife(board);


    return 0;
}
