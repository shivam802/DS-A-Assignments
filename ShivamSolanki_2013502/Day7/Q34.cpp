class Solution {
public:
    vector<int> luckyNumbers (vector<vector<int>>& matrix) {
        int  r=matrix.size();
        int c=matrix[0].size();
        vector<int> special ;
        int minimum=INT_MAX,maximum=INT_MIN;
        int x=0,y=0;
        for(int i=0;i<c;i++)
{maximum=INT_MIN;
for(int j=0;j<r;j++)
{

if(maximum<matrix[j][i])
{
    maximum=matrix[j][i];
    x=j;
 
    
}
    
}  int k=*min_element(matrix[x].begin(),matrix[x].end());
if(k==maximum)
{
 special.push_back(k);
break;
}
}
        return special;
        
    }
};
