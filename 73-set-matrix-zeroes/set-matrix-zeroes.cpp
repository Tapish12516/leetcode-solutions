class Solution {
public:
    // Function to set entire row and column to 0 if an element in the matrix is 0 (Optimal O(1) space)
    void setZeroes(vector<vector<int>>& matrix) {
        // Get dimensions of matrix
        int m = matrix.size();
        int n = matrix[0].size();

        // Flag to track if first row should be zeroed
        bool firstRowZero = false;
        // Flag to track if first column should be zeroed
        bool firstColZero = false;

        // Check if first row has any zero
        for (int j = 0; j < n; j++) {
            if (matrix[0][j] == 0) {
                firstRowZero = true;
                break;
            }
        }

        // Check if first column has any zero
        for (int i = 0; i < m; i++) {
            if (matrix[i][0] == 0) {
                firstColZero = true;
                break;
            }
        }

        // Mark rows and columns in first row/column
        for (int i = 1; i < m; i++) {
            for (int j = 1; j < n; j++) {
                if (matrix[i][j] == 0) {
                    matrix[i][0] = 0;
                    matrix[0][j] = 0;
                }
            }
        }

        // Set matrix cells to zero based on markers
        for (int i = 1; i < m; i++) {
            for (int j = 1; j < n; j++) {
                if (matrix[i][0] == 0 || matrix[0][j] == 0) {
                    matrix[i][j] = 0;
                }
            }
        }

        // Handle first row
        if (firstRowZero) {
            for (int j = 0; j < n; j++) {
                matrix[0][j] = 0;
            }
        }

        // Handle first column
        if (firstColZero) {
            for (int i = 0; i < m; i++) {
                matrix[i][0] = 0;
            }
        }
    }
};

//         int n = matrix.size();
//         int m = matrix[0].size();
//         for(int i = 0 ; i < n ; i++){
//             for(int j = 0 ; j < n ; j++){
//                 if(matrix[i][j] == 0) {
//                     for(int k = 0 ; k < m; k++){
//                         if(matrix[i][k] != 0) matrix[i][k] = -1;
//                     }
//                     for(int l = 0 ; l < n ; l++){
//                         if(matrix[l][j] != 0) matrix[l][j] = -1;
//                     }                                                        //bruteforce , TC = O( n*m*(n+m) ) , space = O(1)
//                 }                                                            //runtime error on test case 2
//             }
//         }

//         for (int i = 0; i < m; i++) {
//             for (int j = 0; j < n; j++) {
//                 if (matrix[i][j] == -1)
//                     matrix[i][j] = 0;
//             }
//         }






        // int n = matrix.size();
        // int m = matrix[0].size();
        // vector<int> row(n,0);
        // vector<int> col(m,0);
        // for(int i = 0 ; i < matrix.size() ; i++){
        //     for(int j = 0 ; j < matrix[0].size() ; j++){
        //         if(matrix[i][j] == 0) {
        //             row[i] = 1; col[j] = 1;
        //         }
        //     }
        // }

        // for(int i = 0 ; i < n ; i++){
        //     if(row[i]==1){
        //         for(int j =0;j<m;j++){
        //             matrix[i][j] = 0;                            //TC = O(n*m)
        //         }                                                //better solution but uses O(m+n) space 
        //     }
        // }

        // for(int j = 0; j<m ; j++){
        //     if(col[j] == 1){
        //         for(int i = 0 ; i < n ; i++){
        //             matrix[i][j] = 0;
        //         }
        //     }
        // }







        // int row = 0 ; 
        // for(int i = 0 ; i < matrix.size() ; i++){
        //     int col = 0;
        //     for(int j = 0 ; j < matrix[0].size() ; j++){
        //         if(matrix[i][j] == 0){
        //             row = i ;                                                        //not works 
        //             for(int k = 0 ; k < matrix.size() ; k++){
        //                 matrix[k][j] = 0;
        //             }
        //         }
        //     }
            
        // }