// Question: https://leetcode.com/problems/set-matrix-zeroes/

class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int m = matrix.size();
        int n = matrix[0].size();
    
        vector<int> rows;
        vector<int> cols;

        // find which all rows and cols has to be marked 0
        for (int i=0;i<m;++i){
            for (int j=0;j<n;++j){
                if (matrix[i][j] == 0) {
                    rows.push_back(i);
                    cols.push_back(j);
                }
            }
        }

        // Mark all the required rows 0
        for (int row : rows) {
            for (int i=0;i<m;++i){
                for (int j=0;j<n;++j){
                    if (i == row) {
                        matrix[i][j] = 0;
                    }
                }
            }
        }

        // Mark all the required cols 0
        for (int col : cols) {
            for (int i=0;i<m;++i){
                for (int j=0;j<n;++j){
                    if (j == col) {
                        matrix[i][j] = 0;
                    }
                }
            }
        }
    }

};