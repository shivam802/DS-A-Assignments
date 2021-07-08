class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
     int n=strs.size();
       for( int i=1;i<strs.size();i++)
       {
             int mini=min(strs[i].size(),strs[i-1].size());
           string word="";
           for( int j=0;j<mini;j++)
           {
               if(strs[i][j]== strs[i-1][j])
                   word+=strs[i][j];
               else
                   break;
           }
            strs[i]=word;

       }
        return strs[n-1];
    }
};
