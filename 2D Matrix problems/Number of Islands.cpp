class Solution {
private:
    void bfs(int row, int col,vector<vector<char>>& grid, vector<vector<char>>& vis)
    {
        vis[row][col] = '1';
        queue<pair<int,int>> q; //I create a Queue of Integer pairs
        q.push({row,col});
        while(!q.empty())
        {
            int row = q.front().first;
            int col =  q.front().second;
            q.pop();
            //traverse over it
            for(int delrow =-1 ; delrow<=1;delrow++)
            {
                for(int delcol = -1; delcol<=1;delcol++)
                {
                    if(delrow !=0 && delcol !=0) continue;
                    int nrow = row +delrow; //Neighbour Row
                    int ncol  = col + delcol; // Neighbour Column
                    if( nrow >= 0 && ncol >= 0 && nrow < grid.size() && ncol < grid[0].size() &&vis[nrow][ncol] != '1' && grid[nrow][ncol] =='1' )
                    {
                        vis[nrow][ncol] ='1';
                        q.push({nrow,ncol});
                    }
                }
            }
        }
    }

public:
    int numIslands(vector<vector<char>>& grid) {
       int m= grid.size(), cnt =0;
       int n = grid[0].size();
        vector<vector<char>> vis(m,vector<char> (n,'0')); //This is the 2d array of visited
        for(int i=0;i<grid.size();i++)
        {
            for(int j=0;j<grid[0].size();j++)
            {
                if(vis[i][j] != '1' && grid[i][j] =='1' ) //It is not visited and its a land
                {
                    bfs(i,j,grid,vis);
                    cnt++; //That means its the starting node of one of the islands
                }
            }
        }
        return cnt;
    }
};
