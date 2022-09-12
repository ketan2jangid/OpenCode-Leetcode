//O(m*n)
class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        int m = mat.size();
        int n = mat[0].size();
        
        if( (m*n!=r*c) || (m==r && n==c))    return mat;
        vector<vector<int>> newMat;
        vector<int> rows;
        
        for(int i=0; i<m; i++){
            for(int j=0; j<n; j++){
                rows.push_back(mat[i][j]);
                
                if(rows.size()==c){
                    newMat.push_back(rows);
                    rows.clear();
                }
            }
        }
        
        return newMat;
    }
};
