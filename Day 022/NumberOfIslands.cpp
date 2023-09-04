//200
class Solution {
  public:
      void bfs(int row,int col, vector<vector<int>> &vis, vector<vector<char>> grid){

        vis[row][col]=1;
        queue<pair<int,int>> q;
        q.push({row,col});
        int n= grid.size();
        int m= grid[0].size();

        while(!q.empty()){
           
            row= q.front().first;
            col= q.front().second;
            q.pop();
            
            for(int i=-1;i<=1;i++){
                for(int j=-1;j<=1;j++){
                
                if(abs(i)==abs(j)){continue;}
                int newrow = row+i;
                int newcol = col+j;
                if(newrow>=0 && newrow<n && newcol>=0 && newcol<m &&
                  vis[newrow][newcol] == 0 && grid[newrow][newcol] == '1'){
                   
                   q.push({newrow,newcol});
                   vis[newrow][newcol]=1;
                }
            }
        }
    }
}
    int numIslands(vector<vector<char>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        int cnt=0;
        vector<vector<int>> vis(n,vector<int>(m,0));
       
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j] == '1' && vis[i][j] == 0){
                    cnt++;
                    bfs(i,j,vis,grid);
                }
            }
        }
        return cnt;
    }
}; 
 
