//using bfs
class Solution {
public:
    int m,n;
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        m = grid.size();
        n = grid[0].size();
        
        int present = 0;
        int largestIsland = 0;
        for(int i=0; i<m; i++){
            for(int j=0; j<n; j++){
                if(grid[i][j]){
                    grid[i][j] = 0;
                    present = islandsize(grid,i,j);
                    if(present>largestIsland)
                        largestIsland = present;
                }
            }
        }
        
        return largestIsland;
    }
    
    int islandsize(vector<vector<int>>& grid, int i, int j){
        queue<pair<int,int>> q;
        int x,y;
        int landsize = 1;
        
        q.push({i,j});
        while(!q.empty()){
            x = q.front().first;
            y = q.front().second;
            q.pop();
            
            if(x-1>=0 && grid[x-1][y]){
                grid[x-1][y] = 0;
                landsize++;
                q.push({x-1,y});
            }
            if(x+1<m && grid[x+1][y]){
                grid[x+1][y] = 0;
                landsize++;
                q.push({x+1,y});
            }
            if(y-1>=0 && grid[x][y-1]){
                grid[x][y-1] = 0;
                landsize++;
                q.push({x,y-1});
            }
            if(y+1<n && grid[x][y+1]){
                grid[x][y+1] = 0;
                landsize++;
                q.push({x,y+1});
            }
        }
        
        return landsize;
    }
};

