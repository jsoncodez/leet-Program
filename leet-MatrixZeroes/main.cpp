#include <iostream>
#include <vector>
#include <map>


using namespace std;


class Solution {
public:

    void dispMatrix(vector<vector<int>> matrix) {

        for (int i = 0; i < matrix.size(); i++) {
            for (int j = 0; j < matrix[i].size(); j++) {
                cout << matrix[i][j] << ", ";
            }
            cout << endl;
        }
    }
    
    void setZeroes(vector<vector<int>>& matrix) {


        int rMax = matrix.size();
        int cMax = matrix[0].size();

        map<int, vector<int>> zMap;
        vector<int> vItrCol;
      
        
        for (int i = 0; i < rMax; i++) {
            
            for (int j = 0; j < cMax; j++) {
                if (matrix[i][j] == 0) {
                    zMap[i].push_back(j);

                }
            }
        }
      
        
        map<int, vector<int>>::iterator itr = zMap.begin();
        
        cout << "itr. first" << itr->first << endl;
        while (itr != zMap.end()) {
           
            cout << "while itr" << endl;
            vItrCol = itr->second;
            for (int i = 0; i < cMax; i++) {
                matrix[itr->first][i] = 0;
                
                
            }
            for (int i = 0; i < vItrCol.size(); i++) {
                for (int j = 0; j < rMax; j++) {
                    matrix[j][vItrCol[i]] = 0;
                }
            }
 

            itr++;
        }

        dispMatrix(matrix);

    }
};

int main() {


    vector<vector<int>> matrix = { {1,1,1},{1,0,1},{1, 1, 1} };
    
    //[[1,0,1],[0,0,0],[1,0,1]]
  
    Solution solve;
    solve.setZeroes(matrix);

    
    matrix = { {0, 1, 2, 0},{3, 4, 5, 2},{1, 3, 1, 5} };

    // [[0,0,0,0],[0,4,5,0],[0,3,1,0]]
    solve.setZeroes(matrix);

    

    return 0;
}
