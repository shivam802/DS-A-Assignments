class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
        int r=image.size();
        for(int i=0;i<r;i++)
        {
            reverse(image[i].begin(),image[i].end());
            
        }
        int c=image[0].size();
          for( int i=0;i<r;i++)
        {
            for( int j=0;j<c;j++)
            {
                if(image[i][j])
                    image[i][j]=0;
                else
                    image[i][j]=1;
            }
        }
      return image;
        
    }
};
