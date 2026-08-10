class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int n = matrix.size();
        int m = matrix[0].size();
        vector<int> row(n,0);
        vector<int> col(m,0);
        for(int i = 0 ; i < matrix.size() ; i++){
            for(int j = 0 ; j < matrix[0].size() ; j++){
                if(matrix[i][j] == 0) {
                    row[i] = 1; col[j] = 1;
                }
            }
        }

        for(int i = 0 ; i < n ; i++){
            if(row[i]==1){
                for(int j =0;j<m;j++){
                    matrix[i][j] = 0;
                }
            }
        }

        for(int j = 0; j<m ; j++){
            if(col[j] == 1){
                for(int i = 0 ; i < n ; i++){
                    matrix[i][j] = 0;
                }
            }
        }
    }
};


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