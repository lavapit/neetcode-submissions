class Solution {
public:
    int numIslands(vector<vector<char>>& grid) {
        int row=grid.size();
        int col=grid[0].size();
        queue<pair<int,int>> q;
        vector<vector<bool>> visited(row,vector<bool>(col,false)); 
        int directions[4][2]={{0,1},{0,-1},{1,0},{-1,0}};
        int count=0;
        for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
                if(grid[i][j]=='1'){
                    count++;
                    q.push({i,j});
                    grid[i][j]='0';
                   
                    while(!q.empty()){
                        pair<int,int> current=q.front();
                        int x=current.first;
                        int y=current.second;
                        q.pop();
                        for(int i=0;i<4;i++){
                            int nx=x+directions[i][0];
                            int ny=y+directions[i][1];
                            if(nx>=0 && ny>=0 && nx<grid.size() && ny<grid[0].size() && grid[nx][ny]=='1'){
                                q.push({nx,ny});
                                grid[nx][ny]='0';
                            }
                        }
                    }
                }
            }
        }
        return count;

    }
};
