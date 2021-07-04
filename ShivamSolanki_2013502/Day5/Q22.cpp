class Solution {
public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {
        int  n=grid.size();
        int m=grid[0].size();
      
        for( int t=0;t<(k%(m*n));t++){  int temp=grid[n-1][m-1];
        for( int i=n-1;i>=0;i--)
        {
            for(int j=m-1;j>=0;j--)
            {
                if(j-1>-1)
                {
                    grid[i][j]=grid[i][j-1];
                }
                else if(i-1>-1)
                {
                    grid[i][j]=grid[i-1][m-1];
                }
            }
        }
         grid[0][0]=temp;}
        return grid;
    }
};
