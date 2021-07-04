class Solution {
public:int m,n;
 bool isvalid(int x,int y)
 {
 return (x<n&&x>=0&&y<m&&y>=0);
 }
    
    int islandPerimeter(vector<vector<int>>& grid) {
         n=grid.size();
        m=grid[0].size();
        int sum=0;
        for( int i=0;i<n;i++)
        {
            
            for( int j=0;j<m;j++)
            {
                cout<<sum;
                if(grid[i][j]==1){
                if(!isvalid(i,j-1) ||grid[i][j-1]==0)
                    sum++;
                if(!isvalid(i-1,j) ||grid[i-1][j]==0)
                    sum++;
                if(!isvalid(i,j+1) ||grid[i][j+1]==0){
                    sum++;if(j+1<m)cout<<grid[i][j+1];}
                if(!isvalid(i+1,j) ||grid[i+1][j]==0)
                    sum++;}
            }
        } 
        return sum;

    }
};
