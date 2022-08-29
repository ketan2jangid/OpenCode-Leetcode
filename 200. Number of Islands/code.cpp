//using breadth first search
class Solution {
public:
    int m,n;
    int numIslands(vector<vector<char>>& grid) {
        m = grid.size();
        n = grid[0].size();
        
        int islands = 0;
        for(int i=0; i<m; i++){
            for(int j=0; j<n; j++){
                if(grid[i][j]=='1'){
                    islandbfs(grid,i,j);
                    islands++;
                }
            }
        }
        
        return islands;
    }
    
    void islandbfs(vector<vector<char>>& grid, int x, int y){
        queue<pair<int,int>> q;
        q.push({x,y});
        grid[x][y] = '0';
        
        int i,j;
        while(!q.empty()){
            i = q.front().first;
            j = q.front().second;
            q.pop();
            
            if(i+1<m && grid[i+1][j]=='1'){
                grid[i+1][j] = '0';
                q.push({i+1,j});
            }
            if(i-1>=0 && grid[i-1][j]=='1'){
                grid[i-1][j] = '0';
                q.push({i-1,j});
            }
            if(j+1<n && grid[i][j+1]=='1'){
                grid[i][j+1] = '0';
                q.push({i,j+1});
            }
            if(j-1>=0 && grid[i][j-1]=='1'){
                grid[i][j-1] = '0';
                q.push({i,j-1});
            }
        }
    }
};

