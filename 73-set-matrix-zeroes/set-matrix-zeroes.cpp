class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        vector<int>row;
        vector <int> col;
        int n = matrix[0].size();
        for(int i = 0;i<matrix.size();i++){
            for(int j = 0;j<n;j++){
                if (matrix[i][j] == 0){
                    row.push_back(i);
                    col.push_back(j);
                }
            }
        }
        for(int i:row){
                    for(int k = 0;k<n;k++){
                        matrix[i][k] = 0;
                    }
                }
        for(int j:col){
        for(int k = 0;k<matrix.size();k++){
                        matrix[k][j] = 0;
                    }
                }
                
        }
};