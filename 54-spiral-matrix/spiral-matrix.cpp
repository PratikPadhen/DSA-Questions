class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {

        // Result container
        vector<int> ans;

        // Dimensions: m rows, n columns
        int m = matrix.size();
        if (m == 0) return ans;              // guard for empty matrix
        int n = matrix[0].size();

        // Total elements we must collect in spiral order
        int total_elements = m * n;

        // How many we have pushed so far
        int count = 0;

        // Four moving boundaries that define the current unvisited rectangle:
        // [startingrow .. endingrow] x [startingcol .. endingcol]
        int startingcol = 0;
        int endingcol   = n - 1;
        int startingrow = 0;
        int endingrow   = m - 1;

        // Keep peeling layers until we collect all elements
        while (count < total_elements) {

            // 1) Top row: left -> right along 'startingrow'
            //    Columns go from startingcol to endingcol.
            for (int i = startingcol; i <= endingcol && count < total_elements; i++) {
                ans.push_back(matrix[startingrow][i]);
                count++;
            }
            // FIX: after consuming the top row, move the top boundary DOWN
            // (your code had startingrow-- which would move it up and break traversal)
            startingrow++;

            // 2) Right column: top -> bottom along 'endingcol'
            //    Rows go from startingrow to endingrow (note: startingrow just advanced).
            for (int i = startingrow; i <= endingrow && count < total_elements; i++) {
                ans.push_back(matrix[i][endingcol]);
                count++;
            }
            // Move the right boundary LEFT
            endingcol--;

            // 3) Bottom row: right -> left along 'endingrow'
            //    Only if there is still a bottom row remaining.
            if (startingrow <= endingrow) {
                // FIX: loop should decrease i, and condition must be i >= startingcol
                for (int i = endingcol; i >= startingcol && count < total_elements; i--) {
                    ans.push_back(matrix[endingrow][i]);
                    count++;
                }
                // Move the bottom boundary UP
                endingrow--;
            }

            // 4) Left column: bottom -> top along 'startingcol'
            //    Only if there is still a left column remaining.
            if (startingcol <= endingcol) {
                // Walk upward from endingrow to startingrow
                for (int i = endingrow; i >= startingrow && count < total_elements; i--) {
                    ans.push_back(matrix[i][startingcol]);
                    count++;
                }
                // Move the left boundary RIGHT
                startingcol++;
            }
        }

        return ans;
    }
};
