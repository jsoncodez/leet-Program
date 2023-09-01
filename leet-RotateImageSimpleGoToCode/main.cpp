class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        reverse(matrix.begin() , matrix.end());
        int row = matrix.size();
        for (int i = 0; i < row; i++) {
            for (int j = 0; j <= i; j++) {
                swap(matrix[i][j], matrix[j][i]);
            }
        }
    }
};
