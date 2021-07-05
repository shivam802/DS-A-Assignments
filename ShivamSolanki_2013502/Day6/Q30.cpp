class Solution {
public:
    bool isvalid(int i,int j,int row,int col)
    {
        return ( i<row&&i>=0&&j<col&&j>=0);
    }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
        if(newColor==image[sr][sc]) return image;
        int row =image.size();
        int col=image[0].size();
        queue<pair<int,int>> q;
        int dx[]={0,1,0,-1};
        int dy[]={-1,0,1,0};
        q.push({sr,sc});
        int val=image[sr][sc];
        image[sr][sc]=newColor;
        while(!q.empty())
        {
            int x=q.front().first;
            int y=q.front().second;
             
            q.pop();
            for( int i=0;i<4;i++)
            {
                int nx=dx[i]+x;
                int ny=dy[i]+y;
                 if(isvalid(nx,ny,row,col)&&val==image[nx][ny])
                 {
                     image[nx][ny]=newColor;
                     q.push({nx,ny});
                     
                 }
                
            }
        }
        return image;
        
    }
};
