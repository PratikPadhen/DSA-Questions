class Solution {
public:
//   TRANPOSE + REVERSE TECHNIQUE

    void rotate(vector<vector<int>>& matrix) {
         int n=matrix.size();
        if(n<=0) return ;
        for( int i=0 ; i < n; i++){  ///here it is taking tranpose of matrix
            for(int j=i+1;j<n;j++){
                swap(matrix[i][j],matrix[j][i]);
            }
        }
        for( int i=0;i<n;i++){           /// simply reverse it..
            reverse(matrix[i].begin(),matrix[i].end());
        }   
    }
};