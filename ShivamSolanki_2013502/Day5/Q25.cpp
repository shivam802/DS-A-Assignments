class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        int nc=r*c/r;
      
        if(mat.size()*mat[0].size()!=r*c) return mat;
   
        vector<vector<int>>  arr(r,(vector<int>(nc,0)));
      int g=0,l=0;
        for( int i=0;i<mat.size();i++)
        {
            for( int j=0;j<mat[0].size();j++)
            {
                arr[l][g]=mat[i][j];
           if(g<nc-1) 
           {
               g++;
           }
                else if(l<r)
                {g=0;
                    l++;
                }
                
                
            }
        }
        return arr;
    }
};
