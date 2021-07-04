class Solution {
public:  int n,m;
     bool isvalid(int x,int y)
 {
 return (x<n&&x>=0&&y<m&&y>=0);
 }
    

    vector<vector<int>> imageSmoother(vector<vector<int>>& img) {
         n=img.size();
         m=img[0].size();
          if (m == 0 || n == 0) return {{}};
        vector<vector<int>> img2(n,(vector<int>(m,0)));
        
        for( int i=0;i<n;i++)
        {
            for( int j=0;j<m;j++)
            {
                int div=0,sum=0;
                if(isvalid(i-1,j-1))
                {div++;sum+=img[i-1][j-1];}
                if(isvalid(i,j-1))
                {
                    div++;sum+=img[i][j-1];
                }
                if(isvalid(i-1,j))
                {
                    div++;sum+=img[i-1][j];
                }
                  if(isvalid(i-1,j+1))
                      {
                    div++;sum+=img[i-1][j+1];
                }
                if(isvalid(i+1,j-1))
                    {
                    div++;sum+=img[i+1][j-1];
                }
                if(isvalid(i+1,j))
                      {
                    div++;sum+=img[i+1][j];
                }
                 if(isvalid(i+1,j+1))
                      {
                    div++;sum+=img[i+1][j+1];
                     
                }
                 if(isvalid(i,j+1))
                      {
                    div++;sum+=img[i][j+1];
                }
               
                
              
              sum+=img[i][j];div++;  cout<<sum<<":"<<div;
                  img2[i][j]=sum/div;
            }
        }
        return img2;
    }
};
