class Solution {
public:
    int strStr(string haystack, string needle) {
       
        int m = haystack.size(), n = needle.size(); 
        if(n==0) return  0;
        int i=0;
        for (int j= n-1; j < m;  j++) {
      
            if(haystack.substr(i,needle.size())==needle)
            {
                return i;
            }
            i++;
           
        }
        return -1;
    }
};
