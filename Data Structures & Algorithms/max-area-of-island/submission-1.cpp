class Solution {
public:
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int row=grid.size();
        int col=grid[0].size();
        queue<pair<int,int>> q;
        int maxi=0;
        int count=1;
        int directions[4][2]={{1,0},{0,1},{-1,0},{0,-1}};
        for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
                if(grid[i][j]==1){
                    q.push({i,j});
                    grid[i][j]=0;
                    count=0;
                    while(!q.empty()){
                        count++;
                        pair<int,int> current=q.front();
                        q.pop();
                        int x=current.first;
                        int y=current.second;
                        for(int i=0;i<4;i++){
                            int nx=x+directions[i][0];
                            int ny=y+directions[i][1];
                            if(nx>=0 && ny>=0 && nx<grid.size() && ny<grid[0].size() && grid[nx][ny]==1){
                                q.push({nx,ny});
                                grid[nx][ny]=0;
                            }
                        }
                        maxi=max(maxi,count);
                    }
                }
            }
        }
        return maxi;
    }
};
