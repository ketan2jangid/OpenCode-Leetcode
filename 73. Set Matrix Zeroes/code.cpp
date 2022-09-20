//SC - O(1), TC - O(m*n)
class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int m = matrix.size();
        int n = matrix[0].size();
        
        bool toprow = false;
        bool topcol = false;
        for(int i=0; i<m; i++){
            for(int j=0; j<n; j++){
                if(i==0 || j==0){
                    if(i==0 && matrix[i][j]==0){
                        toprow = true;
                    }
                    if(j==0 && matrix[i][j]==0){
                        topcol = true;
                    }
                }else if(matrix[i][j]==0 && i!=0){
                    matrix[i][0] = 0;
                    matrix[0][j] = 0;
                }
            }
        }
        
        for(int i=m-1; i>0; i--)
            for(int j=n-1; j>0; j--)
                if(matrix[i][0]==0 || matrix[0][j]==0)
                    matrix[i][j] = 0;
            
        
        if(toprow)
            for(int j=0; j<n; j++)
                matrix[0][j] = 0;
    
        if(topcol)
            for(int i=0; i<m; i++)
                matrix[i][0] = 0;
        
    }
};

//using string
class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int m = matrix.size();
        int n = matrix[0].size();
        
        string row = "";
        string col = "";
        
        for(int i=0; i<m; i++)
            row += '1';
        for(int i=0; i<n; i++)
            col += '1';
        
        for(int i=0; i<m; i++){
            for(int j=0; j<n; j++){
                if(matrix[i][j]==0){
                    row[i] = '0';
                    col[j] = '0';
                }
            }
        }
        
        for(int i=0; i<m; i++)
            if(row[i]=='0')
                for(int j=0; j<n; j++)
                    matrix[i][j] = 0;
        
        
        for(int j=0; j<n; j++)
            if(col[j]=='0')
                for(int i=0; i<m; i++)
                    matrix[i][j] = 0;
    }
};
