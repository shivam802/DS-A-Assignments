class Solution {
public:
    int heightChecker(vector<int>& heights) {
         
        vector<int> neh=heights;
        
        sort(neh.begin(),neh.end());
        
        int height=0;
        for( int i=0;i<heights.size();i++)
        {
          if(neh[i]!=heights[i])
               height++;
        }
        return height;
    }
};
