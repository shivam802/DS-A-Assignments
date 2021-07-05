class Solution {
public:
      bool isvalid(int nx,int ny,int r,int c)
    {
        return (nx<r&&nx>=0&&ny<c&&ny>=0);
    }
   int callbfs(vector<vector<char>> &board,int i,int j)
    {int sum=0;
   vector<vector<int>> direction = {{1, 0}, {0, 1}, {-1, 0}, {0, -1}};
        for (auto d : direction) {
            for (int x = i + d[0], y = j + d[1]; 0 <= x && x < 8 && 0 <= y && y < 8; x += d[0], y += d[1]) {
                if (board[x][y] == 'p') 
                      sum++;
                if (board[x][y] != '.') 
                      break;
            }
        }return sum;
       }
       
    
    int numRookCaptures(vector<vector<char>>& board) {
        
        
        for( int i=0;i<8;i++)
        {
            for( int j=0;j<8;j++)
            {
                if(board[i][j]=='R'){
                   
                  return callbfs(board,i,j);}
            }
        }
      
        return 0;
    }
};
