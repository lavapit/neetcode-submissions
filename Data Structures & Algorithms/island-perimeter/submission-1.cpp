class Solution {
public:
    int islandPerimeter(vector<vector<int>>& grid) {
        int row=grid.size();
        int col=grid[0].size();
        queue<pair<int,int>> q;
        vector<vector<bool>> visited(row, vector<bool>(col, false));
        int directions[4][2]={{0,1},{1,0},{0,-1},{-1,0}};
        for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
                if(grid[i][j]==1){
                    q.push({i,j});
                    visited[i][j]=true;
                    int perimeter=0;
                    while(!q.empty()){
                        pair<int,int> current=q.front();
                        int x=current.first;
                        int y=current.second;
                        q.pop();

                        for(int i=0;i<4;i++){
                            int nx=x+directions[i][0];
                            int ny=y+directions[i][1];
                            if(nx<0 || ny<0 || nx>=row|| ny >=col || grid[nx][ny]==0 ){
                                perimeter++;
                            }else if(!visited[nx][ny]){
                                visited[nx][ny]=true;
                                q.push({nx,ny});
                            }

                        }
                    }
                    return perimeter;
                }
               
            }
        }
        return 0;
    }
};