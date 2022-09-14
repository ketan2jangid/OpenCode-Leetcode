//bruteforce - O(m*n)

//efficient - O(m*logn)

//most efficient
//TC - O(logm * logn), SC - O(1)
class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m = matrix.size();
        int n = matrix[0].size();
        
        if(target<matrix[0][0] || target>matrix[m-1][n-1]) 
            return false;
        
        int l = 0;
        int r = m-1;
        int mid;
        while(l<=r){
            mid = (l+r)/2;
            
            if(matrix[mid][0]<=target && target<=matrix[mid][n-1])
                break;
            else if(matrix[mid][0]<target)
                l = mid+1;
            else
                r = mid-1;
        }
        if(target<matrix[mid][0] || target>matrix[mid][n-1])
            return false;
        
        l = 0;
        r = n-1;
        int ind;
        while(l<=r){
            ind = (l+r)/2;
            
            if(matrix[mid][ind]==target)
                return true;
            else if(matrix[mid][ind]>target)
                r = ind-1;
            else
                l = ind+1;
        }
        
        return false;
    }
};

