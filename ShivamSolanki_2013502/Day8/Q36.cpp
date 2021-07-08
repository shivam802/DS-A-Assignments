class Solution {
public:
    bool findRotation(vector<vector<int>>& mat, vector<vector<int>>& target) {
        
        int n=mat.size();
        int m=mat[0].size();
        vector<vector<int> > v(n,vector<int>(m,0));
        for( int k=0;k<4;k++){
        for(int i=0;i<n;i++)
        {
            reverse(mat[i].begin(),mat[i].end());
            
            for(int j=0;j<m;j++)
            {
            v[j][i]=mat[i][j];
                
            } 
          
            
           
            
        }   mat=v;if(mat==target)
                return true;
        
        }
        
        return false;
    }
};
