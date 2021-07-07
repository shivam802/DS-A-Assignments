class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& hos, int k) {
int row=hos.size();
        vector<int> arr(row,0);
        
        int col=hos[0].size();
        for( int i=0;i<row;i++)
    {int count=0;
        for( int j=0;j<col;j++)
        {
               if(hos[i][j]==0)
               count++;
               
        }
         arr[i]=count;
         
          
        
    }
        for(auto x:arr)
            cout<<x;
        vector<int> q;
        int index;
    for( int j=0;j<k;j++){int max=INT_MIN;
    for( int i=0;i<arr.size();i++)
    {
       if(arr[i]>max)
       {
       max=arr[i];
        index=i;
      
       } 
    }arr[index]=INT_MIN;
    q.push_back(index);
    }
        return q;
    }
};
