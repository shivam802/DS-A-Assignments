class Solution {
public:
    bool isvalid(int nx,int ny,int r,int c)
    {
        return (nx<r&&nx>=0&&ny<c&&ny>=0);
    }
    int surfaceArea(vector<vector<int>>& grid) {
     int r=grid.size();
        int c=grid[0].size();
        int total=0;
        int dx[]={0,1,0,-1};
        int dy[]={-1,0,1,0};
        for(int i=0;i<r;i++)
        {
            for( int j=0;j<c;j++)
            {int neg=0;
                
                
                for( int k=0;k<4;k++)
                {  int nx=dx[k]+i;
                  int ny=dy[k]+j;
                 
                    if(isvalid(nx,ny,r,c))
                    {
                         neg+=min(grid[i][j],grid[nx][ny]);
                           
                        
                        
                    }
                 
                 
                }
             if(grid[i][j]!=0)
                  total+=(2+(4*grid[i][j]))-neg;
                 
                 cout<<total<<endl;
            }
        }
        
        return total;
    }
};
