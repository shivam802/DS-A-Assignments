class Solution {
public:
    int projectionArea(vector<vector<int>>& grid) {
        int sum=0;
        int n=grid.size();
        for( int i=0;i<n;i++)
        {
            sum+=*max_element(grid[i].begin(),grid[i].end());
            
            
        }
        
                
  for (int i = 0; i < n; i++) {
        
        int maxm = grid[0][i];
 
        
        for (int j = 1; j < n; j++) {
        
            if (grid[j][i] > maxm)
                maxm = grid[j][i];
            
        }
      sum+=maxm;
 
     }
        
    for( int i=0;i<n;i++)
    {
        for( int j=0;j<n;j++)
        {
            if(grid[i][j]!=0)
                sum++;
        }
    }
        
       return sum; 
    }
};
