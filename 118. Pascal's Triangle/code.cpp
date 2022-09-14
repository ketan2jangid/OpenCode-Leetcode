//O(n^2)
class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ans = {{1}};
        if(numRows==1)  return ans;
        
        ans.push_back({1,1});
        if(numRows == 2)    return ans;
        
        vector<int> rows;
        for(int i=2; i<numRows; i++){
            rows = vector<int>(i+1,1);
            
            for(int j=1; j<i; j++)
                rows[j] = ans[i-1][j] + ans[i-1][j-1];
            
            ans.push_back(rows);
            rows.clear();
        }
        
        return ans;
    }
};
