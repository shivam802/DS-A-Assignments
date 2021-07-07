class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        
        int count=0;
        int row=grid.size();
        int col=grid[0].size();
        int newright=col-1;
       
        for( int i=0;i<row;i++)
        {
         
            if(grid[i][0]<0)
            {count+=col;
            continue;}
            if(grid[i][col-1]>0)
            {
                continue;
            }
            
             int l=0,r=newright;
            
            while(l<=r)
            {
                
                int mid=l+(r-l)/2;
                if(grid[i][mid]<0)
                {
                    r=mid-1;
                }
                else
                    l=mid+1;
                
            }
            count+=col-l; newright=l;
        }
        return count;
    }
};
