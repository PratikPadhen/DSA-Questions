class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int m = matrix.size();
        int n = m ? matrix[0].size() : 0;

        vector<int> row(m, 0);
        vector<int> col(n, 0);

        // pass 1: mark rows and columns that contain a zero
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (matrix[i][j] == 0) {
                    row[i] = 1;  // mark row i
                    col[j] = 1;  // mark col j
                }
            }
        }

        // pass 2: zero out marked rows/columns
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (row[i] || col[j]) {
                    matrix[i][j] = 0;
                }
            }
        }
    }
};
