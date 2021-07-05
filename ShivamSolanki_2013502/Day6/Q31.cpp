class Solution {
public:
    bool isToeplitzMatrix(vector<vector<int>>& matrix) {
        bool res = true;
        for(int i=0; i<matrix.size()-1; i++){     //to iterate over each row
            for(int j=0; j<matrix[0].size()-1; j++){     //to iterate over each point in that row
                if(matrix[i][j]!=matrix[i+1][j+1]){
                    res=false;
                }
            }
        }
        return res;
    }
};
